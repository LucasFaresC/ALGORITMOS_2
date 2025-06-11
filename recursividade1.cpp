#include <iostream>

// conte de 0 a 2
void contar0a2(int count){

    // condicional que acompanha o contador
    if(count<3){
        printf("\né %d", count);
        count++;
        // iteração do contador SEMPRE antes de chamar a fumção denovo
        contar0a2(count);
    }

}

// conte de 0 a 4 
void conte0a4em2em2(int i){
    if(i < 5){
        printf("\né %d", i);
        i += 2;
        conte0a4em2em2(i);
    }

}

// conte de 2 a 0
void conte2a0(int i){
    if( i > -1){ 
        printf("\né %d", i);
        i--;
        conte2a0(i);
    }


}

void dovalorate4(int valor){
    if(valor < 5){
        printf("\né %d", valor);
        dovalorate4(++valor);
        // ++valor é a mesma coisa que colocar uma linha acima valor++
    }
}

int main(){
    int inicio;
    int a;
    // contar0a2(0);
    // conte0a4em2em2(0);
    // conte2a0(2);

    printf("\nDigite um número entre 1 a 3");
    scanf("%d", &a);

    // printf("\nDigite um valor: ");
    // scanf("%d", &inicio);
    // dovalorate4(inicio);

    return 0;
}