#include <stdio.h>

int main(int args, char** argsv)
{

	int v[3];	
	
	printf("Insira o primeiro valor: ");
	scanf("%i", &v[0]);
	printf("Insira o segundo valor: ");
	scanf("%i", &v[1]);
	printf("Insira o terceiro valor: ");
	scanf("%i", &v[2]);
		
	
	for(int i = 0; i < 3; i++)
	{
		
		if(v[i] % 2 == 0){
			printf("O numero %i e par\n", v[i]);
			continue;
		}
			printf("O numero %i e impar\n", v[i]);

	}





	
	return 0;		

}
