#include <iostream>

void conversaoCelsius(float temp_Farenheit, float *p){
    *p = 5*(temp_Farenheit - 32)/9;

}

int main(){
    float Celsius, Farenheit;

    printf("°F = ");
    scanf("%f", &Farenheit);

    conversaoCelsius(Farenheit, &Celsius);
    printf("%f°C = %f°F", Celsius, Farenheit);

    return 0;
}