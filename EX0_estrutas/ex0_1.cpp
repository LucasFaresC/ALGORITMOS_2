#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int RA;
    char nome[50];
    char endereco[50];
};

int main (){
    Aluno Fulano;
    
    printf("Qual é seu nome ? \n>>> ");
    fgets(Fulano.nome, sizeof(Fulano.nome), stdin); // o fgets dxa uma quebra de linha no final da string se tiver espaço no buffer

    printf("\nQual é seu RA ? \n>>> ");
    scanf("%i", &Fulano.RA);
    getchar();

    printf("\nQual é seu endereço ? \n>>> ");
    fgets(Fulano.endereco, sizeof(Fulano.endereco), stdin);

    printf("\nDADOS\n================\nNome: %sRA: %i\nEndereço: %s", Fulano.nome, Fulano.RA, Fulano.endereco);
    return 0;
}