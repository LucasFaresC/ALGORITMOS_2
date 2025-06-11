#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Professor, não sei se você quis dizer a estrutura DVD, 
// já que o exercicio anterior se tratava de pokemon, ent farei de pokemon

int main(){
    
    struct Pokemon{
        char nome[20];
        int vida;
        int ataque;
        int defesa;
    };

    Pokemon *p;
    p = (Pokemon*) calloc(1,sizeof(Pokemon));

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