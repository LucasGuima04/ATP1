#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //Declaracao de variaveis
    int alcolizado,carteiraMotorista;
    
    //obter inputs sobre idade,carteira de motorista
    printf("Usar: 1 -> sim ; 0-> nao \n");
    printf("Voce esta alcolizado?: ");
    scanf("%d",&alcolizado);
    
    printf("Possui Carteira De Habilitacao?: ");
    scanf("%d",&carteiraMotorista);
    
    //condicionais para verificar se o usario é maior de idade
    if(!alcolizado && carteiraMotorista){
        printf("Voce esta autorizado a conduzir um veiculo!");
    }else if (!alcolizado && !carteiraMotorista){
        printf("Voce precisar tirar sua carteira de motorista!");
    }else if (alcolizado) {
        printf("Voce nao pode dirigir, voce esta bebado!");
    }
    

    getchar();
    return 0;
}