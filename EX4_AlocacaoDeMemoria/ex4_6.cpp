#include <iostream> 

void ler(int *p){
    printf("X é igual a ");
    scanf("%d", p);

}

int main(){
    int *p;
    p = (int*) calloc(1,4);

    ler(p);
    printf("X = %d", *p);

    return 0;
}