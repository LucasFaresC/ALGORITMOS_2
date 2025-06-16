#include <iostream>

void meu_while(int a, int soma){
    if(a<4){
        soma = soma + a;
        a++;
        meu_while(a, soma);
    }else{
        printf("\nSomatoria: %d ", soma);
    }
    
}

int meu_while_com_retorno(int a, int soma){
    if(a<4){
        soma += a;
        soma = meu_while_com_retorno(++a, soma);
    }
    return soma;
}

int outro_meu_while_com_retorno(int i){
    if(i == 1){
        return i;
    }else{
        return outro_meu_while_com_retorno(i-1) + i;
    }

}

int main(){
    int a = 1, soma = 0;
    //meu_while(a, soma);
    
    // soma = meu_while_com_retorno(a, soma);
    //printf("\nSomatoria %d ", soma);
    
    printf("\nSomatoria até: ");
    scanf("%d", &soma);
    soma = outro_meu_while_com_retorno(soma);
    
    printf("\nSomátoria = %d", soma);

    return 0;
}