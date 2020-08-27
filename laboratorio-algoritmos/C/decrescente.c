#include <stdio.h>

int main(int args, char** argsv)
{

	int x, y = 0;	
	
	printf("Insira o primeiro valor: ");
	scanf("%i", &x);
	printf("Insira o segundo valor: ");
	scanf("%i", &y);

	printf("A ordem decrescente dos numeros e: \n");

	if(x > y){
	
		printf("%i, %i\n", x, y);

	}else{

		printf("%i, %i\n", y, x);

	}
	
	return 0;		

}
