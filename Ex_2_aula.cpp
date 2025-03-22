#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, valor_absoluto;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num < 0){
		valor_absoluto = -num;
		
	}else{
		valor_absoluto = num;
	}
	
	printf("O valor absoluto de %d eh %d\n: ", num, valor_absoluto);
	
	getchar();
	return(0);
}
