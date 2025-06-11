#include <iostream>

void maior(float numero1, float numero2, float *p_resultado){
    if(numero1 > numero2){
        *p_resultado = numero1;
        printf("%f > %f", *p_resultado, numero2);
        
    }else if(numero1 < numero2){
        *p_resultado = numero2;
        printf("%f > %f", *p_resultado, numero1);

    }else{
        printf("%f = %f", numero1, numero2);
    }
}

int main(void){
    float primeiro_numero, segundo_numero, resultado;
    
    printf("X = ");
    scanf("%f", &primeiro_numero);

    printf("Y = ");
    scanf("%f", &segundo_numero);

    maior(primeiro_numero, segundo_numero, &resultado);
    return 0;
}