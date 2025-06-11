#include <iostream> 

int main (){
    int *p;
    p = (int *) calloc(1, 4);

    printf("x = ");
    scanf("%i", p);

    printf("\nx = %i", *p);

    return 0;
}