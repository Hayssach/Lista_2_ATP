#include <stdio.h>
#include <stdlib.h>

int main (){
	int idade, anos_servicos;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite os anos de servicos: ");
	scanf("%d", &anos_servicos);
	
	if(idade >= 65 || anos_servicos >= 30 || (idade >= 60 && anos_servicos >= 25)){
		printf("Voce pode se aposentar.\n");
	}else{
		printf("Voce nao pode se aposentar.\n");
	}
	
	getchar();
	return(0);
}
