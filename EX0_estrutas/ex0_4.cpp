#include <stdlib.h>
#include <stdio.h>

struct MonstroDeBolso {
    char nome[50];
    int vida;
    int ataque;
    int defesa;

};

struct Treinador{
    char nome[50];
    int idade;
    int numeroDeEnsignia;

};

int main(){

    MonstroDeBolso pokemon;
    Treinador fulano;

    printf("Insira o nome do Monstrinho: ");
    fgets(pokemon.nome, sizeof(pokemon.nome), stdin);
    
    printf("\nDigite a quantidade de pontos de vida: ");
    scanf("%i", &pokemon.vida);
    getchar();
    
    printf("\nInsira os pontos de Ataque: ");
    scanf("%i", &pokemon.ataque);
    getchar();
    
    printf("\nInsira os pontos de Defesa: ");
    scanf("%i", &pokemon.defesa);
    getchar();

    printf("\nQual é o nome do Treinador: ");
    fgets(fulano.nome, sizeof(fulano.nome), stdin);

    printf("Qual é idade do treinador: ");
    scanf("%i", &fulano.idade);

    printf("Qual é a quatidade de insignia do treinador: ");
    scanf("%i", &fulano.numeroDeEnsignia);

    printf("\nDADOS DO MONSTRO\n=========================\nNome: %sHP: %i\nAtaque: %i\nDefesa: %i\n", pokemon.nome, pokemon.vida, pokemon.ataque, pokemon.defesa );
    printf("\nDADOS DO TREINADOR\n=========================\nNome: %sIdade: %i anos\nQuantidade de Insignias: %i", fulano.nome, fulano.idade, fulano.numeroDeEnsignia);
    return 0;
}