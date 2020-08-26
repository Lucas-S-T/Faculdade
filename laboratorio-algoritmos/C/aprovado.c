#include <stdio.h>

int main(int args, char** argsv)
{

	double m = 0;

	for(int x = 0; x< 4; x++)
	{
	
		printf("Insira a nota %i: ", x+1);
		int n = 0;
		scanf("%i", &n);
		m+= (double) n/4;

	}
	
	printf("Sua media foi %lf\nVoce foi: ", m);
	
	if(m >= 5)
	{
		printf("Aprovado");
		return 0;	
	}
	
	printf("Reprovado!");
}
