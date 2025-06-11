#include <iostream>

int main(){
    double *p;
    p = (double *) calloc(1,8);

    *p = 2.893;
    printf("Valor: %lf", *p);

    return 0;
}