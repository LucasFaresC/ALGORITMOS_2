#include <iostream>
// NÃO ESQUEÇE DE INCLUIR A BIBLIOTECA

int main(){

    int *p1, *p2;
    p1 = (int *)calloc(1, sizeof(int));
    p2 = (int *)calloc(1, sizeof(int));
    
    printf("Endereço p1 = %p\nEndereço p2 = %p", p1, p2); 
    // PASSA O VALOR DEPOIS DA VIRGULA

    free(p1);
    free(p2);

    return 0;
}