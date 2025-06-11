#include <iostream>

int main (){
    int i, j, cont = 1;
    int **a;

    a = (int**)malloc(4*sizeof(int*));

    for(i = 0; i<4; i++){
        *(a+i) = (int*)malloc(3*sizeof(int));
    }

    for(i = 0; i<4; i++){
        for(j = 0; j<3; j++){
            *(*(a+i)+j) = cont;
            cont = cont + 1;
        }
    }

    // *(a) = (int*)malloc(3 *sizeof(int));
    // *(a+1) = (int*)malloc(3 *sizeof(int));
    // *(a+2) = (int*)malloc(3 *sizeof(int));
    // *(a+3) = (int*)malloc(3 *sizeof(int));
    

    // *(*(a+0)+0) = 1;
    // *(*(a+0)+1) = 2;
    // *(*(a+0)+2) = 3;
    // *(*(a+0)+3) = 4;

    // *(*(a+1)+0) = 5;
    // *(*(a+1)+1) = 6;
    // *(*(a+1)+2) = 7;
    // *(*(a+1)+3) = 8;

    // *(*(a+2)+0) = 9;
    // *(*(a+2)+1) = 10;
    // *(*(a+2)+2) = 11;
    // *(*(a+2)+3) = 12;

    // *(*(a+3)+0) = 13;
    // *(*(a+3)+1) = 14;
    // *(*(a+3)+2) = 15;
    // *(*(a+3)+3) = 16;



    for(int i = 0; i<4; i++){
        for(int j = 0; j<3; j++){
            printf("\n%d", *(*(a+i)+j));

        }
    }
    
    return 0;
}