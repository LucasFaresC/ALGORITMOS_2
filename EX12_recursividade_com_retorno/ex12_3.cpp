#include <iostream>

// int media(int a[4], int i){
//     // Refazer
//     if(i == 3){
//         return  a[i];
//     }else{
//         return media(a, i - 1) + a[i-1];
//     }
// }

float media(int i){
    float num;
    printf("\nDigite um numero: ");
    scanf("%f", &num);

    if(i == 1){
        return num;

    }else{
        return media(i-1) + num;
    }
}

int main(){
    float s = media(4)/4.0;
    printf("\nMédia das Notas: %.2f ", s);
    
    // printf("\nMédia Magica = %d", media(A, sizeof(A)));

    return 0;
}