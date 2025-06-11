#include <stdio.h>
#include <stdlib.h>

int anospradias(int anos){
    return anos*365; // multiplicasse homogenicamente por 365 pois foi falado no enunciiado para ignorar danos
}

int main(){
    int idade;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    printf("%i anos = %i dias", idade, anospradias(idade));

    return 0;
}   