#include <iostream>

int main(){
    
    float s = 1.5;
    float *p_s = &s;

    *p_s = 2.5;

    printf("esse é valor de s: %.2f", *p_s);

    return 0;
}