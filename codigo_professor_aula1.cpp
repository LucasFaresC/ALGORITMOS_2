#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cliente{ // é boa pratica declarar struct com a primeira letra maiuscula
    char nome[200];
    char endereco[200];
    int RA;
};

int main(){
    Cliente Fulano; // variavel de nome Fulano de tipo Cliente

    printf("\nDigite o seu RA: ");
    scanf("%i", &Fulano.RA);
    
    getchar(); //funciona como um fflush

    printf("\nDigite o seu nome: ");
    fgets(Fulano.nome, sizeof(Fulano.nome), stdin);
    // fgets guarda o array de caracteres (string), na variavel denominada no primeiro argumento
    
    printf("\nDigite o seu endereco: ");
    fgets(Fulano.endereco, sizeof(Fulano.endereco), stdin);
    
    return 0;
}