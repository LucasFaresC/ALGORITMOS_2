#include <iostream>
#include <string.h>

struct Produto{
    int codigo;
    float preco;
    char nome[10];

};

int main (){
    Produto *p;

    p = (Produto*) malloc(sizeof(Produto));
    
    printf("\nnome do produto: ");
    fgets((*p).nome, 10, stdin); // vai ter um \n no final
    (*p).nome[strcspn((*p).nome, "\n")] = '\0'; //tirando a quebra de linha
    
    printf("\nCodigo do produto: ");
    scanf("%d", &(*p).codigo);
    
    printf("\nPreço do produto: ");
    scanf("%f", &(*p).preco);

    printf("\n| CODIGO | NOME | PREÇO(R$) |\n");
    printf("| %d  | %s | %.2f |", (*p).codigo, (*p).nome, (*p).preco);
    return 0;
}