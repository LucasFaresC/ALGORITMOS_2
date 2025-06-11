#include <iostream>

int main(){
    int *p; 
    int i;
    
    p = (int*)calloc(6, sizeof(int)); // na tabela, o ponteiro vai ta no endereço inicial -> o de "baixo"

    for(i= 5; i>=0;i--){
        printf("Digite um valor: ");
        scanf("%d", p+i);
    }

    for(i = 0; i<6; i++){
        printf("valor: %d", *(p+i));
    }


    return 0;
}