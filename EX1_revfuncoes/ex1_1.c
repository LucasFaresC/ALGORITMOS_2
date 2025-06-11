#include <stdio.h>

void Fahrenheit(){
    float celsius;

    printf("Digite aqui a temperatura em Celsius: ");
    scanf("%f", &celsius);

    printf("\n%.2f°C, em Fahrenheit equivale a %.2f°F", celsius, (9*celsius/5) + 32);
}


int main(){
    Fahrenheit();   
    return 0;
}