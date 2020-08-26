#include <stdio.h>

int main(int args, char **argv)
{

	int x, y = 0;
	printf("Insira o primeiro valor: ");
	scanf("%i", &x);
	printf("Insira o segundo valor: ");
	scanf("%i", &y);
	
	printf("A diferenca e: ");

	if(x > y){
		printf("%i\n", x-y);		
	 	return 0;
	}
	
	printf("%i\n", y-x);

}


