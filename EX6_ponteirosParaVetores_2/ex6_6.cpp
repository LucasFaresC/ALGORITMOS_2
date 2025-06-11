#include <iostream>

int main(){
    int i; // contador
    int *p;
    
    p = (int*) calloc(6, sizeof(int));

    for(i=0; i<6; i++){
        printf("\nInsira o valor %d = ", i);
        scanf("%d", p + i);
    }

    for(i = 6; i>0; i--){
        printf("\nO valor no slot %d é %d", i - 1, *(p + i -1));
    }
    return 0;
}