/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computação
	Prof.° Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exercícios I
	
	QUESTÃO 03: 
	Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu gênero e
	altura, utilizando as seguintes fórmulas:
	
	* para homens: (72.7*h)-58
	* para mulheres: (62.1*h)-44.7

*/

/*
	Declaração de variáveis:
	float --- tipo real (valores com vírgula)
	char --- tipo caractere (apenas um)
	
	Funções utilizadas: 
	printf() --- Imprime uma mensagem para o usuário
	scanf() --- Recebe o valor inserido pelo usuário e atribui para a variável
	fflush(stdin) --- Limpa os buffers de saída
	toupper() --- Transforma todas as letras em maiúsculas
	switch() --- Verifica uma condição de valores da variável
	break; --- Quebra a execução da estrutura (switch)
	if() { } --- Verifica uma condição (se ... é ...)
	else { } --- Verifica se a condição do if não foi atendida
	
	Escopos:
	%c --- tratamento com variáveis de tipo char
	%f --- tratamento com variáveis de tipo float
	
	[OBSERVAÇÃO: %.2f indica que apenas duas casas decimais do float serão exibidas. Exemplo: 10.00]

*/

// Importação de bibliotecas
#include <stdio.h>

// Função principal
void main() {
	
	// Inicializando variáveis
	float peso;
	float altura;
	char genero;
	
	// Solicitando o gênero
	printf("Insira o seu genero [M/F]: ");
	fflush(stdin);
	scanf("%c", &genero);
	genero = toupper(genero);
	
	// Verificando se o gênero escolhido está dentro da seleção
	if(genero == 'M' || genero == 'F') {
		
		// Solicitando a altura
		printf("Insira sua altura: ");
		scanf("%f", &altura);
		
		// Verificando qual foi o gênero escolhido
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
	
	// Caso não esteja...
	else {
		
		// ... exibe uma mensagem de erro
		printf("O genero escolhido nao esta dentro da selecao indicada! Tente novamente.");
	}
	
	
	
}
