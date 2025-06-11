#include <iostream>

void parouimpar(int valor, int *p){
    *p = valor%2;

    if (*p == 1){
        printf("%i é um número ímpar!", valor);
    }else{
        printf("%i é um número par!", valor);
    }
}

int main(){
    int numero, resultado;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    parouimpar(numero, &resultado); // usar funções void como processamento


    return 0;
}