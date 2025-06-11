#include <iostream>

void inicializarEAtribuicao(int **p){
    *p = (int*)malloc(2*sizeof(int));
    **p = 3;
    *(*p+1) = 5;
}

int main(){
    int *a;

    inicializarEAtribuicao(&a);

    printf("%d\n", *a);
    printf("%d\n", *(a+1));

    return 0;
}