#include <iostream>

void menu(){
    printf("\n========MENU========\n1 - Converter Celsius para Farenheit\n2 - Converter Farenheit para Celsius\n0 - sair\n>>> ");
}

void conversaoFarenheit(float Temp_Celsius, float *p){
    *p = (9.0*Temp_Celsius/5.0) + 32;
}

void conversaoCelsius(float temp_Farenheit, float *p){
    *p = 5*(temp_Farenheit - 32)/9;
}

int main(){
    int resposta;
    float Celsius, Farenheit;

    do{
        while(1){
            menu();
            scanf("%i", &resposta);
            if(resposta == 1 || resposta == 2 || resposta == 0){
                break;
            }else{
                printf("\nSeu input é invalido, tente novamente.\n");
            }
        }
        
        if(resposta ==  1){
            printf("\nC° = ");
            scanf("%f", &Celsius);
            conversaoFarenheit(Celsius, &Farenheit);
            
            printf("%fC° = %fF°\n", Celsius, Farenheit);
            
        }else if(resposta == 2){
            printf("F° = ");
            scanf("%f", &Farenheit);
            conversaoCelsius(Farenheit, &Celsius);
            
            printf("%fC° = %fF°\n", Celsius, Farenheit);

        }else if(resposta == 0){
            printf("\nOk, fechando o programa......");
            
        }
    }while(resposta == 1 || resposta == 2);
    return 0;
}