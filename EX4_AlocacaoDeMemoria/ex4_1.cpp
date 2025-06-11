#include <iostream>

int main (){
    int *p;
    p = (int *) calloc(1,4); // zero o conteudo do endereço, e reservo 4 bytes
    // Pode ser tbm => p = (int*) calloc(1, sizeof(int))

    *p = 3;
    printf("Valor: %i", *p);
    return 0;
}