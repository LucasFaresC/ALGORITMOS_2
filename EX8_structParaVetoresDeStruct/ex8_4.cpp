#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    struct Pokemon{
        char nome[20];
        int vida;
        int ataque;
        int defesa;
    };

    Pokemon pokemon;
    Pokemon *p;

    p = &pokemon;

    printf("Bem vindo(a) treinador, digite o nome de seu pokemon: ");
    fgets((*p).nome,20, stdin); // no final da string é colocado um \n
    //fgets(p -> nome, 20, stdin)

    printf("Digite a vida: ");
    scanf("%d", &(*p).vida);

    printf("Digite o ataque: ");
    scanf("%d", &(*p).ataque);

    printf("Digite a defesa: ");
    scanf("%d", &(*p).defesa);

    printf("\nNome: %s",(*p).nome);
    printf("Vida: %d",(*p).vida);
    printf("\nAtaque: %d",(*p).ataque);
    printf("\nDefesa: %d",(*p).defesa);
    
    return 0;
}