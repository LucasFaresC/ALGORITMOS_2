#include <iostream>

int main(){
    int *p; 
    int i, aux ;
    
    p = (int*)calloc(6, sizeof(int)); // na tabela, o ponteiro vai ta no endereço inicial -> o de "baixo"

    for(i= 0; i<6; i++){
        printf("Digite um valor: ");
        scanf("%d", p+i);
    }

    for(i = 0; i<3; i++){
        aux = *(p+i);
        *(p + i) = *(p + 5 - i);
        *(p + 5 + i) = aux;

    }

    for(i = 0; i<6; i++){
        printf("\nvalor: %d", *(p+i));
    }

    return 0;
}