#include <iostream>

int intervalo(int i){
    int num;
    if(i == 0){
        return 0;
    }
    printf("\nx%d = ", i);
    scanf("%d", &num);

    if((num >= 3 && num <= 8)){
        return 1 + intervalo(i-1);
    }else{
        return intervalo(i -1);
    }


}



int main(){
    // int num, cont_intervalo = 0;

    // for(int i = 0; i < 5; i++){
    //     printf("\nx%d = ", i);
    //     scanf("%d", &num);

    //     if(num >= 3 && num <= 8){
    //         cont_intervalo++;
    //     }
    // }
    int total = intervalo(5);
    printf("Foi digitado %d números entre 3 e 8", total);

    return 0;
}