#include <stdio.h>

int main(int args, char** argsv)
{

	double m = 0;
	double em = 0;

	for(int x = 0; x< 4; x++)
	{
		
		printf("Insira a nota %i: ", x+1);
		int n = 0;
		scanf("%i", &n);
		m+= (double) n/4;
		em+= (double) n/5;
	}
	
	printf("Sua media foi %lf\n", m);
	
	if(m >= 7)
	{
		printf("Aprovado");
		return 0;	
	}
	
	printf("Insira a nota de exame: ");
	int xn = 0;
	scanf("%i", &xn);
	
	em += xn/5;
	printf("Sua nova media e: %lf\n", em);	
	if( em >=5){

		printf("Aprovado");
		return 0;	
	
	}
	printf("Reprovado!");
}
