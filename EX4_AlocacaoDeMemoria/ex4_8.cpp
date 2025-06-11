#include <iostream>

void dobrar(int *p){
    *p = (*p)*2;

}

int main (){
    int *a;
    int *aux;
    a = (int* ) calloc(1,4);
    aux = (int* ) calloc(1,4);
    
    *a = 3;
    *aux = *a;

    dobrar(a); // processando a varivel 
    // como é void, não dá pra fazer a* = dobrar(a)

    printf("2.X = %i | X = %i", *a, *aux);

    return 0;
}