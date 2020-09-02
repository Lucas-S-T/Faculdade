#include <stdio.h>
#include <stdlib.h>

int main(int args, char** argv)
{

	int x = 0;

	printf("Insira um valor inteiro: ");
	scanf("%i", &x);
	
	if(x >= 1 && x<=9){
		printf("O valor esta na faixa permitida");	 
		return 0;
	}
	
	printf("O valor nao esta na faixa permitida");
}
