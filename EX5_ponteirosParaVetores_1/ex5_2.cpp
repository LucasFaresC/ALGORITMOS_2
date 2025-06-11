#include <iostream>

int main (){
    int i; // contador
    float *p;

    p = (float*) calloc(10, sizeof(float));

    for(i=0; i<10; i++){
        printf("\nInsira o valor %d = ", i+1);
        scanf("%f", p + i);
    }

    for(i=10; i>0;i--){
        printf("\nValor %d, no endereço %p => %.2f", i, p + i - 1, *(p+i-1)); 
        // ajustando pra não começar no ''slot'' 10 e ir até o zero
    }

    return 0;
}