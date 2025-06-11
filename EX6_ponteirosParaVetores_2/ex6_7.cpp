#include <stdio.h>
#include <stdlib.h>

int main(){
	int *p;
	int i;
	p = (int*)malloc(6 * sizeof(int)); //
	
	for(i = 0; i < 6; i++){
		printf("\n Digite o numero %d: \n", i + 1);
		scanf("%d",p + (5 - i));
	}
	
	printf("\n\n Números digitados invertidos: ");

	for(i = 0; i < 6; i++){
		printf("\n%d", *(p + i));
	}
    
	return 0;
}