#include <iostream>

void conversaoFarenheit(float Temp_Celsius, float *p){
    *p = (9.0*Temp_Celsius/5.0) + 32;

}

int main(){
    float Celsius, Farenheit;

    printf("°C = ");
    scanf("%f", &Celsius);

    conversaoFarenheit(Celsius, &Farenheit);
    printf("%f°C = %f°F", Celsius, Farenheit);

    return 0;
}