#include <stdio.h>
#include <stdlib.h>

int main (){
	int numero;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		printf("o numero %d eh par \n", numero);
	}else{
		printf("o numero %d eh impar \n", numero);
	}
	
	getchar();
	return(0);
}
