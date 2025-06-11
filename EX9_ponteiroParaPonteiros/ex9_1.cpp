#include <iostream>

void inicializar(int *p){
    *p = 3;
}

int main(){
    int a;

    inicializar(&a);

    printf("%d", a);

    return 0;
}