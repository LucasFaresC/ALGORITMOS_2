#include <iostream>

int main(){

    double t = 9.87654321;
    double *pt = &t;

    *pt = 1.23456789;
    printf("este é o valor do double t: %lf", *pt );

    return 0;
}