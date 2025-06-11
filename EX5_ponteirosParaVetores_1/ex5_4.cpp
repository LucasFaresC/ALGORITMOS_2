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
        printf("\nValor %d, no endereço %p é %.2f, portanto 2 x %.2f = %.2f", i + 1, p + i, *(p+i), *(p+i), *(p+i)*2);
    }

    return 0;
}