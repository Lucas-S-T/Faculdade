#include <stdio.h>

int main(int args, char** argsv)
{

	int m[4];

	for(int x = 0; x< 4; x++)
	{
		printf("Insira o valor %i: ", x+1);
		int n = 0;
		scanf("%i", &n);
		m[x] = n;
	}
	

	for(int x = 0; x<4; x++)
	{

	int v = m[x];

	
	if( v % 2 == 0)
	{
	
		printf("O numero %i e divisivel por 2\n", v);
		continue;
	}
	
	if( v % 3 == 0)
	{
	
		printf("O numero %i e divisivel por 3\n", v);
		continue;
	}
	
	printf("O numero %i nao e divisivel por 2 ou 3\n", v);

	}
return 0;
}
