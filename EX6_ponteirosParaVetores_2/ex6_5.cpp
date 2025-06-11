#include <iostream>

int main(){
    int aux, i; // contador
    int *p;
    
    p = (int*) calloc(5, sizeof(int));

    for(i=0; i<5; i++){
        printf("\nInsira o valor %d = ", i+1);
        scanf("%d", p + i);
    }

    aux = *(p + 0);
    *(p + 0) = *(p + 4);
    *(p + 4) = aux;

    printf("Primeiro %d, ultimo %d", *(p+0), *(p+4));

    return 0;
}