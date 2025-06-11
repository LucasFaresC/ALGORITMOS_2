#include <stdlib.h>
#include <stdio.h>

struct MonstroDeBolso {
    char nome[50];
    int vida;
    int ataque;
    int defesa;

};

int main(){

    MonstroDeBolso pokemon;

    printf("Insira o nome do Monstrinho: ");
    fgets(pokemon.nome, sizeof(pokemon.nome), stdin);
    
    printf("\nDigite a quantidade de pontos de vida: ");
    scanf("%i", &pokemon.vida);
    getchar();
    
    printf("\nInsira os pontos de Ataque: ");
    scanf("%i", &pokemon.ataque);
    getchar();
    
    printf("\nInsira os ponots de Defesa: ");
    scanf("%i", &pokemon.defesa);
    getchar();

    printf("\nDADOS\n=========================\nNome: %sHP: %i\nAtaque: %i\nDefesa: %i", pokemon.nome, pokemon.vida, pokemon.ataque, pokemon.defesa );

    return 0;
}