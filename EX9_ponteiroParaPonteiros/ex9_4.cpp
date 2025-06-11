#include <iostream>

void inicializar(int **p){
    *p = (int*)malloc(2*sizeof(int));
}

int main(){
    int *a;

    inicializar(&a);

    *a = 3;
    
    *(a+1) = 5;

    printf("%d\n", *a);
    printf("%d\n", *(a+1));

    return 0;
}