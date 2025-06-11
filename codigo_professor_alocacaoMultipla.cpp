#include <iostream>

int main(){
    int i;
    int *p;

    p = (int*)malloc(3 * sizeof(int)); // separo 12 (3*4) bytes, ou seja 3 inteiros

    // *(p + 0) = 3; -> pode atribuir na heap dessa maneira
    // *(p + 1) = 4;
    // *(p + 2) = 5;

    // com scanf e for pra preencher esse espaço
    
    // com for, pra prencher esse espaço
    for (i = 0; i<3; i++){
        printf("\nDigite um numero\n>>> ");
        scanf("%d", p+i);
        
        
    }
    for( i = 0; i<3; i++){
        printf("\nPosição %p tem o valor: %d", p +i,*(p + i));
        
    }
    
    
    return 0;
}