#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Declaracao de variaveis
    int idade,anosServico;
    
    //Input da idade do usuario 
    printf("Quantos anos voce tem?: ");
    scanf("%d",&idade);
    
    //Input dos anos de servico do usuario
    printf("Quantos anos de servico voce tem?: ");
    scanf("%d",&anosServico);
    
    //condicional para direito a aposentadoria
    if((idade>=65 || anosServico>=30)||(idade>=60 && anosServico>=25)){
        printf("Voce tem direito a aposentadoria!"); //possibilidade 65+ anos ou 30+ servico ou 60+ anos e 25+ servico
    }else{
        printf("Voce nao tem direito a aposentadoria!"); //nao atende aos requisitos
    }
    
    getchar();
    return 0;
}