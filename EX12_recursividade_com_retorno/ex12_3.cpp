#include <iostream>

int media(int a[4], int i){
    // Refazer
    if(i == 3){
        return  a[i];
    }else{
        return media(a, i - 1) + a[i-1];
    }
}

int media_Nardi(int i){
    int num;
    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if(i == 1){
        return num;

    }else{
        int ret, sp;
        ret = media_Nardi(i-1);
        sp = ret + num;
        return sp;

        // mesma coisa que -> return soma(i-1) + num
    }
}

int main(){
    int A[4] = {6, 7 , 10, 0};
    int s = media_Nardi(4)/4;


    printf("\n%d", s);
    
    printf("\nMédia Magica = %d", media(A, sizeof(A)));

    return 0;
}