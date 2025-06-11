#include <iostream>

int main(){

    int nome_da_variavel;
    nome_da_variavel = 1;
    
    int *p;
    p = &nome_da_variavel;

    printf("%p\n%i", p, *p); // passagem por ponteiro pra valor

    // output 
    // 0x7ffc51025fbc
    // 1

    return 0;
}