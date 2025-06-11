#include <iostream>
#include <string.h>

// já fiz tudo sabendo que ia usar vetor hahahahahah
struct Dvd {
    int prateleira;
    char nome[50];
    char genero[15];
    int duracao;
};


int main (){
    Dvd *d;
    d = (Dvd*) calloc(1,sizeof(Dvd));

    printf("nome: ");
    fgets(d->nome, sizeof(d->nome), stdin); //vem com \n no final
    d->nome[strcspn(d->nome, "\n")] = '\0'; // trocando quebra de linha por um caracter nulo
    
    printf("genero: ");
    fgets(d->genero, sizeof(d->genero), stdin); //vem com \n no final
    d->genero[strcspn(d->genero, "\n")] = '\0'; // trocando quebra de linha por um caracter nulo
    
    printf("duração: ");
    scanf("%d", &d->duracao);
    
    printf("Prateleira: ");
    scanf("%d", &d->prateleira);

    printf("%s, %s, %d, %d", d->nome, d->genero, d->duracao, d->prateleira);

    return 0;
}