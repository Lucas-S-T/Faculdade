#include <stdio.h>
#include <math.h>


// N.A.: Se for compilar usando o GCC, use o parametro "-lm" para importar a lib math!

int main(int args, char **argv)
{

	int a, b, c = 0;
	
	printf("Insira o valor de a (ax^2): ");
	scanf("%i", &a);
	printf("Insira o valor de b (bx): ");
	scanf("%i", &b);
	printf("Insira o valor de c: ");
	scanf("%i", &c);
	
	if(a == 0 || b == 0 || c ==0){
		
		printf("Valores invalidos, tente novamente\n");
		main(args, argv);
		return 0;
	}	


	// (-b +- sqrt(b^2 - 4ac)) / 2a
	

	int d = b*b - 4*a*c;

	printf("Delta: %i\n", d);

	if(d == 0)
	{
	
		double r = (double) -b/(2.0*a);
		printf("Valor de X: %lf\n", r);
		return 0;	
	} 

	
	if(d < 0)
	{
	
		printf("A equacao nao tem valores reais");
		return 0;

	}

	
	double dsqrt = sqrt(d);		
	
	double x1 = (-b + dsqrt)/2*a;
	double x2 = (-b - dsqrt)/2*a;
	
	printf("O valores de X1 e X2 sao, respectivamentes: %lf, %lf", x1, x2);
	
	return 0;
}
