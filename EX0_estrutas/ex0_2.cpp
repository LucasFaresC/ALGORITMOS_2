#include <stdio.h>
#include <stdlib.h>

struct DiscoDVD{  
    char nome[50];
    char genero[50];
    int duracao;
    int prateleira;
};

int main(){
    DiscoDVD Filme;

    printf("Novo registro de DVD\n============\nDigite o nome na capa do Dvd: ");
    fgets(Filme.nome, sizeof(Filme.nome), stdin); // nome da vairavel, tamanho doos caracteres, aonde armazena

    printf("Digite o genêro: ");
    fgets(Filme.genero, sizeof(Filme.genero), stdin);
    
    printf("Digite o a duração em horas: ");
    scanf("%i", &Filme.duracao);
    
    printf("Digite o a prateleira do DVD: ");
    scanf("%i", &Filme.prateleira); // não esquece do &

    printf("\nNome: %sGenêro: %sHoras de Contéudo: %i\nLocalizado na pralteleira: %i", Filme.nome, Filme.genero, Filme.duracao, Filme.prateleira);

    return 0;
}