#include <iostream>

void ler(int **x){
    // atrinuiindo um valor à variavel p da main
    *x = (int*)malloc(sizeof(int));
    // atribuindo um valor ao espaço reservado pelo malloc
    **x = 3;
}


int main(){
    int *p;

    // inicializando o p
    //p = (int*)malloc(sizeof(int));
    //*p = 3;

    ler(&p);

    printf("%d", *p);

    return 0;
}