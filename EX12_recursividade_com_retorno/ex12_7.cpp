#include <iostream>

int parouimpar(int i){
    int num;
    if(i==0){
        return 0;
    }
    printf("\nX%d = ", i);
    scanf("%d", &num);

    if(num%2 == 0){
        return 1 + parouimpar(i - 1);
    }else{
        return parouimpar(i - 1);

    }

}   

int main(){

    printf("Esta foi a quantidade de pares digitados: %d", parouimpar(5));

    return 0;
}