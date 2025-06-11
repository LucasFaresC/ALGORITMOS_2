#include <stdio.h>

void celsius(){
    float temp;

    printf("Digite aqui a temperatura em Fahrenheit: ");
    scanf("%f", &temp);

    printf("\n%.2f°F, em Celsius equivale a %.2f°C", temp, 5*(temp-32)/9);
}


int main(){
    celsius();   
    return 0;
}