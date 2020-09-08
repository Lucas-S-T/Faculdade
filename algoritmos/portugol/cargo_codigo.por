programa
{
	
	funcao inicio()
	{

		inteiro c = 0;
		escreva("Insira o código do cargo: ");
		leia(c);

		se(c != 1 e c != 2){
			escreva("Codigo inválido");
			retorne;
		}

		real s = 0.0;
		escreva("Insira o salario: ");
		leia(s);

		se(c == 1){
			escreva("Código: ", c, " Cargo: Caixa ", "Aumento: 20% ", "Salario atual: ", s, " Novo salário: ", (s+(s*0.2)));
			retorne;
		}
		
		escreva("Código: ", c, "Cargo: Gerente", "Aumento: 10% ", "Novo salário: ", (s+(s*0.1)));
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 234; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */