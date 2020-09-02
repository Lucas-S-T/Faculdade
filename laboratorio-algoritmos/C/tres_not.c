#include <stdlib.h>
#include <stdio.h>

int main(int args, char **argv)
{

	int v, v1, v2 = 0;
	printf("Insira um valor inteiro: ");
	scanf("%i", &v);

	// Imprimir na tela apenas se o valor for
	// MENOR que tres, [ 0, 1, 2] 
	// utilizando apenas NOT e sem operadores relacionais...
	

	v1 = v-1;
	v2 = v1-1;
	
	if(!v || !v1 || !v2){
		printf("O valor esta entre 0 e 2");
		return 0;
	}
	
	// que gambiarra ._.

	printf("O valor nao esta entre 0 e 2");


}
