programa
{
	
	funcao inicio()
	{

		real p, a = 0.0;	
	
		escreva("Digite seu peso em kg:")
		leia(p)
		escreva("Digite sua altura em metros:")
		leia(a)
		
		se(p <= 0){
			escreva("Peso invalido")
			retorne
		}

		se(a <=0.10){
			escreva("Altura invalida")
			retorne
		}

		escreva("Seu IMC e:", p / (a*a))
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 32; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */