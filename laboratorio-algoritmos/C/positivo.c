#include <stdio.h>


int main(int args, char** argsv)
{

	int x = 0;
	
	printf("Insira um valor positivo/negativo: ");
	scanf("%i", &x);
	
	if(x<0){
		x*=-1;
	}
	
	printf("Valor positivo: %i", x);

}
