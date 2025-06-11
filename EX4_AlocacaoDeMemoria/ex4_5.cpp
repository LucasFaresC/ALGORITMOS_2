#include <iostream> 

void mostrar(int *p){
    printf("x = %i", *p);

}

int main(){
    int *p;
    p = (int *) calloc(1, 4);
    
    *p = 10;
    mostrar(p);

    return 0;
}