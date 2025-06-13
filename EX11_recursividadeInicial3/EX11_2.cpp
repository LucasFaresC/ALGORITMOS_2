#include <iostream> 

// professor, seu codigo dá em um loop infinito então fiz algumas alterações

void parouimpar(){
    int numero;
    printf("\nDigite um número inteiro: ");
    scanf("%d", &numero);
    
    if(numero < 8){
        if(numero%2 == 0){
            printf("\n%d é par", numero);
            parouimpar();    
            
            
        }else if(numero%2 != 0){
            printf("\n%d é ímpar", numero);
            parouimpar();    
    
        }
    }

}

int main (){

    parouimpar();

    return 0;
}