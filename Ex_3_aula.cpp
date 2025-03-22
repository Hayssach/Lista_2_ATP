#include <stdio.h>
#include <stdlib.h>

int main (){
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if(num % 2 == 0){
		printf("o numero %d eh par \n", num);
	}else{
		printf("o numero %d eh impar \n", num);
	}
	
	getchar();
	return(0);
}
