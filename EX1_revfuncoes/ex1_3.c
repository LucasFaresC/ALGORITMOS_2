#include <stdio.h>

float quadrado(float numero){

    return numero*numero;
}

int main(){
    float numeroQualquer;

    printf("Escreva um numero real qualquer: ");
    scanf("%f", &numeroQualquer);

    printf( "%.2f² = %.2f", numeroQualquer,quadrado(numeroQualquer));
    return 0;
}