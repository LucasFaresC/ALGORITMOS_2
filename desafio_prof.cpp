#include <iostream>

void apresentar(int a){
    printf("Você (provavelmente) Nasceu em %d", a);
}

void calcularAno (int i){
    int a;
    a = 2025 - i;
    apresentar(a);
}

void ler(){
    int i;
    printf("Digite sua Idade: ");
    scanf("%d", &i);
    calcularAno(i);
}

void conte1Ate5(int count){
    if(count < 6){    
        printf("\n%d", count);
        count ++;
        conte1Ate5(count);
    }
} 

void conteAte8de2em2(int count){ // tem que passar o contador como argumento
    if(count < 9){
        printf("\n%d", count);
        count += 2;
        conteAte8de2em2(count);
    }

}

int main(){
    int count = 2;
    
    conteAte8de2em2(count);

    //ler();
    return 0;
}