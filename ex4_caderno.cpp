#include <iostream>

void parouimpar(int i){
    
    if(i == 1){
        return; 
    }

    int x;
    printf("\nx = ");
    scanf("%d", &x);
    
    if( x%2 == 0){
        printf("\nx = %d, e é par!", x);
        parouimpar(i-1);
    }else{
        printf("\nx %d, e é impar!", x);
        parouimpar(i-1);
    }

}



int main(){

    parouimpar(4);

    return 0;
}