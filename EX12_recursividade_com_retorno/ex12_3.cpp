#include <iostream>

// int media(int a[4], int i){
//     // Refazer
//     if(i == 3){
//         return  a[i];
//     }else{
//         return media(a, i - 1) + a[i-1];
//     }
// }

int media(int i){
    int num;
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if(i == 1){
        return num;

    }else{
        return media(i-1) + num;
    }
}

int main(){
    int s = media(4)/4;
    printf("\n%d", s);
    
    // printf("\nMédia Magica = %d", media(A, sizeof(A)));

    return 0;
}