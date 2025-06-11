#include <iostream>


// 8-Transforme o trecho while abaixo em uma fun��o recursiva:

int main(int argc, char** argv) {

	int a;
	
	printf("\nDigite um n�mero entre 1 e 3");
	scanf("%d",&a);	

	while(a<1 || a>3){
		printf("\nErrrrou! Tente novamente!");
		scanf("%d",&a);
	}
	printf("Tchau");
	return 0;
}