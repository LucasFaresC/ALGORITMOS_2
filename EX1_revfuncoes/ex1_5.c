#include <stdio.h>
#include <stdlib.h>

float minutosparasegundos(float minutos){
    return 60*minutos;
}

int main(){
    float minutos;

    printf("Digite a quantidade de minutos (numeros com virgula são validos): ");
    scanf("%f", &minutos);

    printf("%.2f minutos = %.2f segundos", minutos, minutosparasegundos(minutos));

    return 0;
}