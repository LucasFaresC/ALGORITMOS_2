#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// p->nome == p.nome
// &p->nome == ENDEREÇO NA HEAP de p.nome

struct Pokemon{
    char nome[20];
    int vida;
    int ataque;
    int defesa;
};

struct Dvd {
    int prateleira;
    char nome[50];
    char genero[15];
    int duracao;
};

void lerPokemon(Pokemon *p){

    printf("Bem vindo(a) treinador, digite o nome de seu pokemon: ");
    fgets(p->nome,20, stdin); // no final da string é colocado um \n
    p->nome[strcspn(p->nome, "\n")] = '\0'; // tirando a quebra de linha

    printf("Digite a vida: ");
    scanf("%d", &p->vida);

    printf("Digite o ataque: ");
    scanf("%d", &p->ataque);

    printf("Digite a defesa: ");
    scanf("%d", &p->defesa);


}

void lerDvd(Dvd *d){
    
    printf("\nBem vindo(a) ao registro de DVDs\nnome: ");
    fgets(d->nome, sizeof(d->nome), stdin); //vem com \n no final
    d->nome[strcspn(d->nome, "\n")] = '\0'; // trocando quebra de linha por um caracter nulo
    
    printf("\nGenêro: ");
    fgets(d->genero, sizeof(d->genero), stdin); //vem com \n no final
    d->genero[strcspn(d->genero, "\n")] = '\0'; // trocando quebra de linha por um caracter nulo
    
    printf("Duração: ");
    scanf("%d", &d->duracao);
    
    printf("Prateleira: ");
    scanf("%d", &d->prateleira);

}

void ApresentarPokemon(Pokemon *p){
    printf("\nPokemon: %s",p->nome);
    printf("\nVida: %d",p->vida);
    printf("\nAtaque: %d",p->ataque);
    printf("\nDefesa: %d\n",p->defesa);
}

void ApresentarDvd(Dvd *d){
    printf("\n Titulo do DVD: %s", d->nome);
    printf("\n Genêro do DVD: %s", d->genero);
    printf("\n Duração do DVD: %d", d->duracao);
    printf("\n Prateleira do DVD: %d\n", d->prateleira);
    
}

int main(){

    Pokemon *p;
    Dvd *d;
    
    p = (Pokemon*)calloc(1, sizeof(Pokemon));
    d = (Dvd*)calloc(1, sizeof(Dvd));

    lerPokemon(p);
    ApresentarPokemon(p);

    lerDvd(d);
    ApresentarDvd(d);

    return 0;
}