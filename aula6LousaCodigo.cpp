#include <iostream>

int dobro (int *x){ // no argumento da delcaração da função => declarar ponteiro
    *x = *x*2; // pra mudar a variavel de fato, deve-se atribuir, por ponteiro dentro da função
    return *x;
}

int main(){
    int a = 3;
    dobro(&a); // passando o endereço de a, atruibuimos ao ponteiro inteiro x declarado na função

    printf("%i", a);
    return 0;
}