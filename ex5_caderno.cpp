
#include <iostream> 

int main(){
    int a;

    do{
        printf("\nDigite algo: ");
        scanf("%d", &a);
        switch (a){
        case 1:
            printf("\nDigitou 1");
            break;
        
        case 2:
            printf("\nDigitou 2");
            break;
        }

    }while(a!=0);



    return 0;
}
