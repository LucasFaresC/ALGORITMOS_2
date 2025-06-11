#include <iostream>

void inicializarEAtribuicao(int **p){
    *p = (int*)malloc(sizeof(int));
    **p = 5;

}

int main(){
    int *a;

    inicializarEAtribuicao(&a);

    printf("%d", *a);

    return 0;
}