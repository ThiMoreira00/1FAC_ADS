/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computa��o
	Prof.� Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exerc�cios I
	
	QUEST�O 03: 
	Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu g�nero e
	altura, utilizando as seguintes f�rmulas:
	
	* para homens: (72.7*h)-58
	* para mulheres: (62.1*h)-44.7

*/

/*
	Declara��o de vari�veis:
	float --- tipo real (valores com v�rgula)
	char --- tipo caractere (apenas um)
	
	Fun��es utilizadas: 
	printf() --- Imprime uma mensagem para o usu�rio
	scanf() --- Recebe o valor inserido pelo usu�rio e atribui para a vari�vel
	fflush(stdin) --- Limpa os buffers de sa�da
	toupper() --- Transforma todas as letras em mai�sculas
	switch() --- Verifica uma condi��o de valores da vari�vel
	break; --- Quebra a execu��o da estrutura (switch)
	if() { } --- Verifica uma condi��o (se ... � ...)
	else { } --- Verifica se a condi��o do if n�o foi atendida
	
	Escopos:
	%c --- tratamento com vari�veis de tipo char
	%f --- tratamento com vari�veis de tipo float
	
	[OBSERVA��O: %.2f indica que apenas duas casas decimais do float ser�o exibidas. Exemplo: 10.00]

*/

// Importa��o de bibliotecas
#include <stdio.h>

// Fun��o principal
void main() {
	
	// Inicializando vari�veis
	float peso;
	float altura;
	char genero;
	
	// Solicitando o g�nero
	printf("Insira o seu genero [M/F]: ");
	fflush(stdin);
	scanf("%c", &genero);
	genero = toupper(genero);
	
	// Verificando se o g�nero escolhido est� dentro da sele��o
	if(genero == 'M' || genero == 'F') {
		
		// Solicitando a altura
		printf("Insira sua altura: ");
		scanf("%f", &altura);
		
		// Verificando qual foi o g�nero escolhido
		switch(genero) {
			
			// Caso seja masculino...
			case 'M': 
				peso = (72.7 * altura) - 58;
				break;
				
			// Caso seja feminino...
			case 'F':
				peso = (62.1 * altura) - 44.7;
				break;
				
		}
		
		// Exibindo o peso ideal
		printf("O seu peso ideal eh %.2f.", peso);
	} 
	
	// Caso n�o esteja...
	else {
		
		// ... exibe uma mensagem de erro
		printf("O genero escolhido nao esta dentro da selecao indicada! Tente novamente.");
	}
	
	
	
}
