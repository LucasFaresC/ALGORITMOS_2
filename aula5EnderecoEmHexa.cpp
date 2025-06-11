#include <iostream>

int main(){
    int a, b;
    double c;
    a = 3;
    b = 4;
    c = 20;
    
    printf("%p\n%p\n%p", &a, &b, &c);

    return 0;
}