#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaAlunoUm,notaAlunoDois, notaFinal; //definindo variaveis
    float notaExame,notaTotal;
    
    //Adquirir a primeira nota
    printf("Inserir a nota 1o nota: ");
    scanf("%f",&notaAlunoUm);
    
    //Adquirir a segunda nota
    printf("Inserir a nota 2o nota: ");
    scanf("%f",&notaAlunoDois);
    
    //Operacoes com as notas
    notaFinal = (notaAlunoDois + notaAlunoUm)/2;
    
    //Condicionas para avaliar a nota do aluno 
    if(notaFinal>=5){
        printf("Aluno aprovado com a nota: %.2f",notaFinal);
    }else{
        printf("Aluno esta de recuperacao com a nota: %.2f \n",notaFinal); 
        printf("Insira a nota de exame do aluno: "); //pedir nota da prova do exame final
        scanf("%f",&notaExame);
        
        notaTotal = (notaExame + notaFinal)/2;
        if(notaTotal >= 5){
             printf("Aluno aprovado com o exame e nota: %.2f",notaTotal);
        } else {
             printf("Aluno reprovado de qualquer jeito(burro pra crl em) com a nota: %.2f",notaTotal);
        }
    }
    //Fim
    getchar();
    return 0;
}