#include <iostream>

void inicializar(int **p){
    *p = (int*)malloc(sizeof(int));

}

int main(){
    int *a;
    inicializar(&a);

    *a = 4;

    printf("%d", *a);
    return 0;
}