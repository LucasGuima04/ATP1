#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    //definindo variaveis necessárias
    FILE* stream_menu;
    FILE* stream_boleto;
    char nome_produto[100];
    float soma_total = 0;
    float preco;
    int qtd;
    char cabecalho[1000];

    //Abre o arquivo
    stream_menu = fopen("menu.txt", "r");

    //verifica se o arquivo foi aberto
    if(stream_menu == NULL){
        printf("Erro ao abrir o menu.txt.\n");
        printf("Verifique se o arquivo esta na mesma pasta do programa.\n");
        return 1; //Termina o programa com erro
    }
    //papel de ignorar a primeira linha do menu
    fgets(cabecalho,sizeof(cabecalho), stream_menu);

    //Abre o arquivo de boleto
    stream_boleto = fopen("boleto.txt", "w");

    //verifica se o arquivo foi aberto
    if(stream_menu == NULL){
        printf("Erro ao criar o boleto.txt.\n");
        return 1; //Termina o programa com erro
    }
    
    char linha[100];

    while(fscanf(stream_menu, "%s %f %f", nome_produto, &preco, &qtd) >=2){
        if(fscanf(stream_menu, "%s %f %f", nome_produto, &preco, &qtd) == 2){
            fprintf(stream_boleto,"%s %f");
        }
    }
    // 4. O loop principal para ler o arquivo.
    // A condição do 'while' é a chave para usar fscanf corretamente.
    // fscanf retorna o número de itens que conseguiu ler com sucesso.
    // Como nosso formato tem 3 especificadores ("%s %d %lf"), esperamos que o retorno seja 3.
    //while (fscanf(arquivo, "%s %d %lf", nome_produto, &quantidade, &preco) == 3) {
        // 5. Se a leitura foi bem-sucedida, imprime os dados na tela para confirmar.
        //printf("Produto: %-10s | Quantidade: %-5d | Preco: R$ %.2f\n",
               //nome_produto, quantidade, preco);
    //}
    fclose(stream_menu);
    printf("a");
    return 0;
}