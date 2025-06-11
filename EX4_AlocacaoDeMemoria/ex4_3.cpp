#include <iostream>

int main (){
    char *p;
    p = (char* ) calloc(1,1);

    *p = 'L';
    printf("Valor: %c", *p);

    return 0;
}