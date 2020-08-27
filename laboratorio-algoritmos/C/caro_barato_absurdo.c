#include <stdio.h>

int main(int args, char** argsv)
{

	int preco = 0;	
	
	printf("Insira o preco do produto: ");
	scanf("%i", &preco);
	
	if(preco <3000)
	{
		printf("Barato");
		return 0;
	}	
	
	if(preco >=3000 && preco <5000)
	{
		printf("Caro");
		return 0;
	}	
	
	printf("Absurdo");
	
	return 0;		

}
