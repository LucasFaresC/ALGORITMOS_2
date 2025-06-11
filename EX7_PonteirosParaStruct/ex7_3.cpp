#include <iostream>
#include <string.h>

struct Produto{
    int codigo;
    float preco;
    char nome[10];

};

int main (){
    Produto produto;
    Produto *p;

    p = &produto;
    
    printf("\nnome do produto: ");
    fgets((*p).nome, 10, stdin); // vai ter um \n no final
    (*p).nome[strcspn((*p).nome, "\n")] = '\0'; //tirando a quebra de linha
    
    printf("\nCodigo do produto: ");
    scanf("%d", &(*p).codigo);
    
    printf("\nPreço do produto: ");
    scanf("%f", &(*p).preco);

    printf("\n| CODIGO | NOME | PREÇO(R$) |\n");
    printf("| %d  | %s | %.2f |", produto.codigo, produto.nome, produto.preco);
    return 0;
}