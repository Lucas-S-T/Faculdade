#include <stdio.h>
#include <stdlib.h>

int main(int args, char **argv)
{

	int a = 0;

	printf("Insira um valor inteiro: ");
	scanf("%i", &a);

	if(a % 2 == 0){
		printf("O numero e par");
		return 0;
	}
	
	printf("O numero e impar");


}
