#include <stdio.h>

int main(int args, char** argsv)
{

	int m[3];

	for(int x = 0; x< 3; x++)
	{
		printf("Insira o valor %i: ", x+1);
		int n = 0;
		scanf("%i", &n);
		m[x] = n;
	}


	for(int x = 0; x<3; x++)
	{

		int v = m[x];

		if( v % 1 == 0){
			
			if( v % 2 == 0){
				if( v % 3 == 0)
				{
					printf("O numero %i e divisivel por 1,2 e 3\n", v);
				}else{
					printf("O numero %i NAO e divisivel por 1,2 e 3\n", v);
				}
			}else{
				printf("O numero %i NAO e divisivel por 1,2 e 3\n", v);
			}
			

		}else{
			printf("O numero %i NAO e divisivel por 1,2 e 3\n", v);
		}
	}
return 0;
}
