#include <iostream>

void media(float *notas, float *pesos, float *resultado){
    float *soma_das_notas;
    float *soma_dos_pesos;

    soma_das_notas = (float*) calloc(1,sizeof(float));
    soma_dos_pesos = (float*) calloc(1,sizeof(float));

    for(int i = 0; i < 10; i++){
        *soma_das_notas += *(notas + i) * *(pesos + i);    
        *soma_dos_pesos += *(pesos + i);   
    }

    *resultado = (*soma_das_notas)/ (*soma_dos_pesos);

    printf("Sua média final foi de %.2f", *resultado);
}


void lerNotas(float *nota){
    for (int i = 0; i<10; i++){
        printf("\nP%d = ", i);
        scanf("%f", nota + i);
    }
    
    
}

void lerPesos(float *peso){
    for(int i = 0; i<10; i++){
        printf("\nPeso da P%d = ", i);
        scanf("%f", peso + i);

    }
}

int main(){
    float *p, *n;
    float *r;

    p = (float*) calloc(10, sizeof(float));
    n = (float*) calloc(10, sizeof(float));
    r = (float*) calloc(1, sizeof(float));

    lerNotas(n);
    lerPesos(p);
    media(n, p,r);


    return 0;
}

