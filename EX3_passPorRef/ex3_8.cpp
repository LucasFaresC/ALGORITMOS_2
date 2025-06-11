#include <iostream>

void PoderAquisitivoPerdido(float salario, float *p){
    *p = 1.1067 *salario;
    *p = *p - salario; 

    printf("Seu poder aquisitivo foi defasado em %.2f R$", *p);
}

int main(){
    float salario_atual, poder_perdido;

    printf("Qual é o valor de seu salário, em Reais: ");
    scanf("%f", &salario_atual);

    PoderAquisitivoPerdido(salario_atual, &poder_perdido);

    return 0;
}