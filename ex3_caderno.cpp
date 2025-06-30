#include <iostream>

int quinta_potencia(int n, int count){
    if(count == 0)
        return 1;
    else{
        return n*(quinta_potencia(n, count - 1));
    }
}

int main(){
    printf("Bunchakalaka: %d", quinta_potencia(2, 5));
    return 0;
}