#include <stdio.h>
#include <stdlib.h>

int main (){
	int num;
	printf("Digite um numero positivo ou negativo:");
	scanf("%d", &num);
	
	if(num >= 0){
		printf("numero positivo!");
	}else{
			printf("numero negativo!");
	}
	
	getchar();
	return(0);
}
