#include <iostream>

int main (){
    int i; // contador
    float *p;
    float *maior;
    
    maior = (float*)calloc(1, sizeof(float));

    p = (float*) calloc(5, sizeof(float));

    for(i=0; i<5; i++){
        printf("\nInsira o valor %d = ", i+1);
        scanf("%f", p + i);
    }

    *maior = *(p+0); // maior recebe algo nessa comparação, 

    for(i=0; i<5; i++){
        if(*(p+i)> *maior){
            *maior = *(p+i);
        }
        
    }
    
    printf("O maior valor digitado foi: %f", *maior);

    return 0;
}