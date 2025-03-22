#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b, c, temp;
	printf(" digite o primeiro numero:");
	scanf ("%d", &a);
	printf(" digite o segundo numero:");
	scanf ("%d", &b);
	printf(" digite o terceiro numero:");
	scanf ("%d", &c);

    if(a > b){
    	temp = a;
    	a = b;
    	b = temp;
	}
	if(a > c){
		temp = a;
		a = c;
		c = temp;
	}
	if(b > c){
		temp = b;
		b = c;
		c = temp;
	}
	
	printf(" os numerosem ordem crescente sao : %d, %d, %d\n", a, b, c);
	getchar();
	return(0);
}
