#include <stdlib.h>

// struct pode ser declarado pelo  
struct Cliente { // Struct cria TIPOS de varivel, um modelo base pra declarar variaveis em contextos mais complexos
    // Identificador struct    
    int RA;
    char Nome[200];

}; // PRECISA DE PONTO E VIRGULA

int main (){

    // char nome[200], nome2[200], nome3[200];
    // char end[200], end2[200], end[200];
    
    // desorganizado, o struct resolve isso
    // struct pode ser considerado um Proto Objeto (esse termo não existe) 


    Cliente fulano;

    return 0;
}