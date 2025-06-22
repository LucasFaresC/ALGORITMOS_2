#include <iostream>

int maior(int i){
    int num;
    printf("\nX%d = ", i);
    scanf("%d", &num);

    if(i == 1){
        return num;
    }

    int maior_num = maior(i - 1);
    // vou pegando cada num
    
    if(num > maior_num){ // analise de dois por dois
        return num;
    
    }else{
        return maior_num;
    }

}

int maiorComTernario(int i){
    int num;
    printf("\nX%d = ", i);
    scanf("%d", &num);

    if(i == 1){
        return num;
    }else{
        int maior_num = maior(i - 1);
        // vou pegando cada num
        
        if(num > maior_num){ // analise de dois por dois
            return num;
        
        }else{
            return maior_num;
        }
    }
}

int main(){

    printf("Esse é o maior x digitado -> %d", maior(4));

    return 0;
}