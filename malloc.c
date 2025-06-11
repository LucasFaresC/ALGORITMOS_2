#include <stdlib.h>
#include <stdio.h>

// usar ponteiros sem declarar variaveis

int main(){
    int *p, *q;

    p = (int*) malloc(4); // endereço inteiro de 4 bytes 
    // memory allocate => malloc
    
    *p = 5; // o endereço de memoria receve o inteiro 5

    printf("%i é o valor armazanedo no endereço %p\n", *p, p); 

    free(p); //free a block allocated by malloc or calloc

    printf("Agora, o endereço %p, vale %i", p, *p);
    
    // 5 é o valor armazanedo no endereço 0x557afa9472a0
    // Agora, o endereço 0x557afa9472a0, vale 1471129927 -> virou lixo de memória

    q = (int*) malloc(4);

    
    // printf("%i", *q);
    // free(q);
    // printf("%i", *q);
    

    return 0; 
}