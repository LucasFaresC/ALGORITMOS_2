#include <iostream>

int main (){
    int i; // contador
    float *p;
    float *menor;
    
    menor = (float*)calloc(1, sizeof(float));

    p = (float*) calloc(5, sizeof(float));

    for(i=0; i<5; i++){
        printf("\nInsira o valor %d = ", i+1);
        scanf("%f", p + i);
    }

    *menor = *(p+0); // maior recebe algo nessa comparação, 

    for(i=0; i<5; i++){
        if(*(p+i)< *menor){
            *menor = *(p+i);
        }
        
    }
    
    printf("O maior valor digitado foi: %f", *menor);

    return 0;
}