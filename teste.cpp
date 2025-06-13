#include <iostream>

int main(){

    int a;
    
    printf("\nDigite um numero");
    
    scanf("%d", &a);
    
    while(a<8){
        
        if(a%2==0)
        
        printf("\n%d = par", a);
        
        else
        
        printf("\n%d = impar",a);
        
    }
}