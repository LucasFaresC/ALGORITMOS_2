#include <iostream>

int menor(int contador){
    int num;
    printf("\nX%d = ", contador);
    scanf("%d", &num);

    if(contador == 1){
        return num;
    }else{
        int menor_num = menor(contador - 1);
        
        if(num < menor_num){
            return num;
        }else{
            return menor_num;
        }
    
    }

}


int main(){
    printf("Esse é o x menor -> %d", menor(4));

    return 0;
}