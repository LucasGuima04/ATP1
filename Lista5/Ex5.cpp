#include<stdio.h>
#include<stdlib.h>

float imc;

float calcula_imc(float *massaCorporal){
    if(*massaCorporal<18.5){
        return 0;
    }else if(18.5<=*massaCorporal && *massaCorporal<=24.9){
        return 1;
    }else if(25<=*massaCorporal && *massaCorporal<=29.9){
        return 2;
    }else if(*massaCorporal>=30){
        return 3;
    }
    return 10;
}

void imprima_imc(){
    if(calcula_imc(&imc) == 0){
        printf("Magreza!");
    }else if (calcula_imc(&imc) == 1){
        printf("Saudavel!");
    }else if (calcula_imc(&imc) == 2){
        printf("Sobrepeso!");
    }else if (calcula_imc(&imc) == 3){
        printf("Obeso!");
    }

}

int main(){
    float peso = 0, altura = 0;

    printf("Informe peso(em Kg): ");
    scanf("%f",&peso);
    printf("Informe altura(em m): ");
    scanf("%f",&altura);

    imc = peso/altura*altura;

    imprima_imc();
}