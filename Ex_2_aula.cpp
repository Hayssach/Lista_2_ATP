#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, valor_abs;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num < 0){
		valor_abs = -num;
		
	}else{
		valor_abs = num;
	}
	
	printf("O valor absoluto de %d eh %d\n: ", num, valor_abs);
	
	getchar();
	return(0);
}
