#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, b, d, temp;
	printf(" digite o primeiro numero:");
	scanf ("%d", &i);
	printf(" digite o segundo numero:");
	scanf ("%d", &b);
	printf(" digite o terceiro numero:");
	scanf ("%d", &d);

    if(a > b){
    	temp = i;
    	i = b;
    	b = temp;
	}
	if(a > d){
		temp = i;
		i = d;
		d = temp;
	}
	if(b > d){
		temp = b;
		b = d;
		d = temp;
	}
	
	printf(" os numerosem ordem crescente sao : %d, %d, %d\n", i, b, d);
	getchar();
	return(0);
}
