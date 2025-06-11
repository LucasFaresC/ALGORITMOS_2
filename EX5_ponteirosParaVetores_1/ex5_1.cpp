#include <iostream>

int main (){
    int i; // contador
    float *p;

    p = (float*) calloc(10, sizeof(float));

    for(i=0; i<10; i++){
        printf("\nInsira o valor %d = ", i+1);
        scanf("%f", p + i);
    }

    for(i=0; i<10;i++){
        printf("\nValor %d, no endereço %p => %.2f", i + 1, p + i, *(p+i));
    }

    return 0;
}