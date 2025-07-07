#include <stdio.h>
#include <stdlib.h>

int main (){
	int numero;
	printf("Digite um numero positivo ou negativo:");
	scanf("%d", &numero);
	
	if(numero >= 0){
		printf("numero positivo!");
	}else{
			printf("numero negativo!");
	}
	
	getchar();
	return(0);
}
