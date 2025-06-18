#include <iostream>

int somatoria(int i){
    if(i==1){
        return 1;
    }else{
        return somatoria(i - 1) + i;
    }
}



int main(){
    int x;
    printf("x = ");
    scanf("%d", &x);

    printf("Somatoria de X = %d", somatoria(x));
    

    return 0;
}