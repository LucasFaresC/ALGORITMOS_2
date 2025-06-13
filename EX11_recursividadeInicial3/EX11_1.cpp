#include <iostream>
#include <stdlib.h>

void verificarNumeros(int n1){
    int n2;
    printf("\nJogador 2, Tente Adivinhar o número do jogador 1: ");
    scanf("%d", &n2);

    if(n1 != n2){
        verificarNumeros(n1);
    }else{
        printf("\nDeu certo, você acertou !!!!!!!!!!");
    }

}

//


int main(){
    int numero_j1;

    printf("\n----Jogo de Adivinhação----\nJogador 1, escolha um número Qualquer: ");
    scanf("%d", &numero_j1);

    verificarNumeros(numero_j1);


    return 0;
}