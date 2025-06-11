#include <iostream>

int main(){

    int r = 1;
    int *p_r = &r;

    *p_r = 2; // muda direto no registro
    printf("este é o valor de r: %i", *p_r);

    return 0;
}