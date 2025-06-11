#include <iostream>

void ler(int *ano){
    printf("Em que ano você nasceu ?\n>>> ");
    scanf("%i",ano);

}

void processar_idade(int *ano, int *idade){
    *idade = 2020 - *ano;
}

void apresentar(int *idade){
    printf("Você em 2020, tinha (provavelmente) tem %i anos de idade ", *idade);
}

int main(){
    int *ano, *idade;
    ano = (int *) calloc(1,4);
    idade = (int *) calloc(1,4);

    ler(ano);
    processar_idade(ano,idade);
    apresentar(idade);

    return 0;
}