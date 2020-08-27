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
		
		for(int j = 0; j < 3; j++)
		{

			if(v[i] < v[j]){
				
				int temp = v[i];
				v[i] = v[j];
				v[j] = temp;				

			}

		}
		


	}


		printf("A ordem crescente dos numeros e: %i, %i, %i\n", v[0], v[1], v[2]);


	
	return 0;		

}
