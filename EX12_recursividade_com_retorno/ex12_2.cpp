#include <iostream>

int fatorial(int i){
    if(i== 1 || i == 0){
        return 1;
    }else{
        return fatorial(i - 1) * i;
    }

}


int main(){
    int x;
    printf("x = ");
    scanf("%d", &x);
    
    printf("x! = %d ", fatorial(x));
    
    
    return 0;
}