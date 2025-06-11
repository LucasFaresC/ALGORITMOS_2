#include <stdio.h>
#include <stdlib.h>


int main(){
	int *p, *in, *fim;
	int i, x;
	p = (int*)malloc(6 * sizeof(int));
	
	for(i = 0; i < 6; i++){
		printf("\n Digite o numero %d: \n", i + 1);
		scanf("%d",p + i);
	}
	
	in = p;
    fim = p + 5;

    while(in < fim){
        x = *in;
        *in = *fim;
        *fim = x;

        in++;
        fim--;
    }
	
	printf("\n\n Números digitados invertidos: ");

	for(i = 0; i < 6; i++){
		printf(" %d", *(p + i));
	}
	
	printf("\n\n");

	return 0;
}