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
    char linha[100];

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
    
    //Lero arquivo menu.txt linha por linha
    //Imprime os produtos desejados no boleto.txt
    fprintf(stream_boleto,"======================= Boleto =======================\n");
    while(fgets(linha,sizeof(linha),stream_menu) != NULL){
        int itens = sscanf(linha, "%s %f %d", nome_produto,&preco,&qtd);

        if(itens == 3){
            fprintf(stream_boleto,"Produto: %-10s | Quantitade: %-5d | Total: %.2f\n",nome_produto,qtd,preco*qtd);
            soma_total += qtd*preco;
        }
    }
    fprintf(stream_boleto,"O valor total da conta: %.2f",soma_total);

    //Fecha os arquivos
    fclose(stream_menu);
    fclose(stream_boleto);
    printf("Boleto gerado com sucesso!");
    return 0;
}