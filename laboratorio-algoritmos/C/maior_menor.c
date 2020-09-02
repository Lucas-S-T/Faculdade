#include <stdlib.h>
#include <stdio.h>


int main(int args, char** argv)
{

	int h, l, t = 0;
	
	printf("Insira o valor 1: ");
	scanf("%i", &t);
	h = t;
	l = t;

	printf("Insira o valor 2: ");
	scanf("%i", &t);
	
	if(t > h) h = t;
	if(t < l) l = t;
	
	printf("Insira o valor 3: ");
	scanf("%i", &t);

	if(t > h) h = t;
	if(t < l) l = t;

	printf("Insira o valor 4: ");
	scanf("%i", &t);

	if(t > h) h = t;
	if(t < l) l = t;

	printf("Insira o valor 5: ");
	scanf("%i", &t);

	if(t > h) h = t;
	if(t < l) l = t;


	// Meu Deus, quanto ctrl+c e ctrl+v :P

	printf("O maior valor foi %i e o menor valor foi %i", h, l);

}
