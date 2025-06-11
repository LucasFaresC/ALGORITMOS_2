#include <stdio.h>

float area (float raio){
    return 3.14159*raio*raio;
}

int main(void){
    float raioQualquer;

    printf("Digite um valor de raio em cm: ");
    scanf("%f", &raioQualquer);

    printf("A area deste Cirlulo é de %.2fcm²", area(raioQualquer));
    
    return 0;
}