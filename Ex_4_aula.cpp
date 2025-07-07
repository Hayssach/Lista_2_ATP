#include <stdio.h>
#include <stdlib.h>

int main (){
	int i, anos_s;
	printf("Digite sua idade: ");
	scanf("%d", &i);
	printf("Digite os anos de servicos: ");
	scanf("%d", &anos_s);
	
	if(i >= 65 || anos_s >= 30 || (i >= 60 && anos_se >= 25)){
		printf("Voce pode se aposentar.\n");
	}else{
		printf("Voce nao pode se aposentar.\n");
	}
	
	getchar();
	return(0);
}
