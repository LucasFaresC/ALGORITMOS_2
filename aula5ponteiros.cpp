#include <iostream>

// ponteiro ocupa a quantidade de bytes de acordo com o sistema -> 32 bits => 4 bytes | 64 bits => 8 bytes

int main(){
    int* a; // "a" armazena o endereço de um tipo inteiro -> Hexadecimal | Tipo ponteiro de Inteiro
    int b; 

    b = 3;
    a = &b; // ponteiros recebem endereços de seus tipos 

    printf("essa é o valor de b = %i", b);
    printf("\nesse é o endereço de b = %p", a);


    // da pra mudar o valor da variavel, sem ter que atribuir ela propiramente dita
    // 

    return 0;
}