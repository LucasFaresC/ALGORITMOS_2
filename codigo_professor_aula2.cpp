#include <iostream>

int main(){
    int ano, idade;

    printf("Digite seu ano de nascimento: ");
    scanf("%i", &ano);
    
    idade = 2025 - ano;
    
    printf("Você tem, mais ou menos, %i anos de idade. ", idade);

    return 0;
}