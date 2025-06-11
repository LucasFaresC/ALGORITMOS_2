
#include <iostream>

int main(){
    int a;
    int a2;
    int *b;
    int *c;

    a = 4;
    a2 = 5;
    b = &a;
    c = &a2;

    printf("Endereço de a = %p | Valor de a = %d", &a, a);
    printf("\nEndereço de a2 = %p | Valor de a2 = %d", &a2, a2);
    printf("\nEndereço de b = %p | Valor de b = %p | Valor de *b = %d", &b, b, *b);
    printf("\nEndereço de c = %p | Valor de c = %p | Valor de *c = %d", &c, c, *c);
    
    // Endereço de a = 0x7ffd6a2c1a00 | Valor de a = 4
    // Endereço de a2 = 0x7ffd6a2c1a04 | Valor de a2 = 5
    // Endereço de b = 0x7ffd6a2c1a08 | Valor de b = 0x7ffd6a2c1a00 | Valor de *b = 4
    // Endereço de c = 0x7ffd6a2c1a10 | Valor de c = 0x7ffd6a2c1a04 | Valor de *c = 5

    return  0;
}