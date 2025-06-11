#include <iostream>

void dobrar(int *p){
    *p = (*p)*2;

}

int main (){
    int *a;
    a = (int* ) calloc(1,4);

    *a = 3;
    dobrar(a); // variavel
    // como é void, não dá pra fazer a* = dobrar(a)

    printf("2X = %i", *a);

    return 0;
}