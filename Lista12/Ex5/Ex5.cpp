#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct para representar um único produto
typedef struct {
    char nome[100];
    float preco;
    int quantidade;
} Produto;

typedef struct {
    Produto* produtos;
    int num_produtos;
    int capacidade;
} Menu;

Produto inicializar_produto(const char* nome, float preco, int quantidade) {
    Produto p;
    strcpy(p.nome, nome); // Copia a string de nome para a struct
    p.preco = preco;
    p.quantidade = quantidade;
    return p;
}

// Inicializa a struct Menu com valores padrão
void inicializar_menu(Menu* menu) {
    menu->capacidade = 10; // Começamos com uma capacidade inicial de 10 produtos
    menu->num_produtos = 0;
    // Aloca a memória inicial para a nossa lista de produtos
    menu->produtos = (Produto*)calloc(1,menu->capacidade * sizeof(Produto));
    if (menu->produtos == NULL) {
        printf("Erro ao alocar memória para o menu!\n");
        exit(1);
    }
}

// Adiciona um produto à lista de produtos dentro do menu
void adicionar_produto_ao_menu(Menu* menu, Produto produto) {
    // Verifica se a lista está cheia
    if (menu->num_produtos == menu->capacidade) {
        // Se estiver cheia, dobramos a capacidade
        menu->capacidade *= 2;
        // Realocamos a memória para o novo tamanho
        menu->produtos = (Produto*)realloc(menu->produtos, menu->capacidade * sizeof(Produto));
        if (menu->produtos == NULL) {
            printf("Erro ao realocar memória para o menu!\n");
            exit(1);
        }
    }
    // Adiciona o novo produto na próxima posição livre e incrementa o contador
    menu->produtos[menu->num_produtos] = produto;
    menu->num_produtos++;
}

// Libera a memória alocada para a lista de produtos
void liberar_menu(Menu* menu) {
    free(menu->produtos);
    menu->produtos = NULL; // Boa prática para evitar ponteiros "soltos"
    menu->num_produtos = 0;
    menu->capacidade = 0;
}

int main() {
    Menu menu;
    inicializar_menu(&menu);

    FILE* stream_menu;
    
    // --- Bloco 1: Carregar dados do arquivo para as structs ---
    stream_menu = fopen("menu.txt", "r");
    if (stream_menu == NULL) {
        printf("Erro ao abrir o menu.txt.\n");
        printf("Verifique se o arquivo esta na mesma pasta do programa.\n");
        liberar_menu(&menu); // Libera memória antes de sair
        return 1;
    }

    char linha[200];
    // Ignora a primeira linha (cabeçalho) do arquivo
    fgets(linha, sizeof(linha), stream_menu); 

    // Lê o arquivo linha por linha e preenche nossa struct Menu
    while (fgets(linha, sizeof(linha), stream_menu) != NULL) {
        char nome_temp[100];
        float preco_temp;
        int qtd_temp;

        // Extrai os dados da linha para variáveis temporárias
        if (sscanf(linha, "%s %f %d", nome_temp, &preco_temp, &qtd_temp) == 3) {
            // Usa a função para criar uma struct Produto
            Produto p = inicializar_produto(nome_temp, preco_temp, qtd_temp);
            // Adiciona o produto recém-criado ao nosso menu
            adicionar_produto_ao_menu(&menu, p);
        }
    }
    fclose(stream_menu);
    printf("Menu carregado com %d produtos.\n", menu.num_produtos);

    //Processar os dados das structs e gerar o boleto
    FILE* stream_boleto = fopen("boleto.txt", "w");
    if (stream_boleto == NULL) {
        printf("Erro ao criar o boleto.txt.\n");
        liberar_menu(&menu);
        return 1;
    }

    fprintf(stream_boleto, "======================= Boleto =======================\n");
    float soma_total = 0;

    // Itera sobre a lista de produtos que está dentro da nossa struct Menu
    for (int i = 0; i < menu.num_produtos; i++) {
        Produto p_atual = menu.produtos[i];
        float total_produto = p_atual.preco * p_atual.quantidade;
        fprintf(stream_boleto, "Produto: %-10s | Quantidade: %-5d | Total: R$ %.2f\n", 
                p_atual.nome, p_atual.quantidade, total_produto);
        soma_total += total_produto;
    }

    fprintf(stream_boleto, "======================================================\n");
    fprintf(stream_boleto, "O valor total da conta: R$ %.2f\n", soma_total);
    fclose(stream_boleto);

    // --- Bloco 3: Limpeza ---
    liberar_menu(&menu);
    printf("Boleto gerado com sucesso!\n");

    return 0;
}