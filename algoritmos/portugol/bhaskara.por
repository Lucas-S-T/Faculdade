programa
{
	inclua biblioteca Matematica

	inteiro a,b,c;
	
	funcao inicio()
	{

		escreva("Insira o valor de a (ax^2): ");
		leia(a);
		escreva("Insira o valor de b (bx): ");
		leia(b);
		escreva("Insira o valor de c: ");
		leia(c);

		real d = (b*b-(4*a*c));
		real dsqrt = Matematica.raiz(d, 2);
		
		
		real x1 = (-b+dsqrt)/(2*a);
		real x2 = (-b-dsqrt)/(2*a);
		
		escreva("X 1: ", x1, "\n");
		escreva("X 2: ", x2);	
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 233; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */