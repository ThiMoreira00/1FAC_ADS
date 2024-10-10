/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computação
	Prof.° Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exercícios I
	
	QUESTÃO 05: 
	Escrever um algoritmo que, dada uma quantia
	em reais, calcule o menor número possível de
	notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
	o valor pode ser decomposto.

*/

/*
	Declaração de variáveis:
	int --- tipo inteiro (valores inteiros)
	
	Funções utilizadas: 
	printf() --- Imprime uma mensagem para o usuário
	scanf() --- Recebe o valor inserido pelo usuário e atribui para a variável
	if() --- Verifica uma condição (se ... é ...)
	
	Escopos:
	%d --- tratamento com variáveis de tipo int
	
	Operadores:
	>= (maior ou igual que)
	/ (divisão)
	% (resto da divisão)
	%= (atribuir o resto da divisão a uma variável) [Exemplo: valor = valor % 10 poderia simplificar para: valor %= 10]

*/

// Importação de bibliotecas
#include <stdio.h>

// Função principal
void main() {
	
	// Inicializando variáveis
	int quantiaTotal;
	int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0, moedas1 = 0;
	
	// Solicitando quantia ao usuário
	printf("Insira a quantia de reais a ser decomposta: ");
	scanf("%d", &quantiaTotal);
	
	
	// Verificando se é possível extrair notas de 100 na quantia a seguir
	if(quantiaTotal >= 100) {
		
		// Se for, guardar a quantidade de notas que a quantiaTotal possui
		notas100 = quantiaTotal / 100;
		
		// Armazenar o restante para as próximas verificações
		quantiaTotal %= 100;
	}
	
	// Verificando se é possível extrair notas de 50 na quantia a seguir
	if(quantiaTotal >= 50) {
		
		// Se for, guardar a quantidade de notas que a quantiaTotal possui
		notas50 = quantiaTotal / 50;
		
		// Armazenar o restante para as próximas verificações
		quantiaTotal %= 50;
	}
	
	// Verificando se é possível extrair notas de 20 na quantia a seguir
	if(quantiaTotal >= 20) {
		
		// Se for, guardar a quantidade de notas que a quantiaTotal possui
		notas20 = quantiaTotal / 20;
		
		// Armazenar o restante para as próximas verificações
		quantiaTotal %= 20;
	}
	
	// Verificando se é possível extrair notas de 10 na quantia a seguir
	if(quantiaTotal >= 10) {
		
		// Se for, guardar a quantidade de notas que a quantiaTotal possui
		notas10 = quantiaTotal / 10;
		
		// Armazenar o restante para as próximas verificações
		quantiaTotal %= 10;
	}
	
	// Verificando se é possível extrair notas de 5 na quantia a seguir
	if(quantiaTotal >= 5) {
		
		// Se for, guardar a quantidade de notas que a quantiaTotal possui
		notas5 = quantiaTotal / 5;
		
		// Armazenar o restante para as próximas verificações
		quantiaTotal %= 5;
	}
	
	// Verificando se é possível extrair notas de 2 na quantia a seguir
	if(quantiaTotal >= 2) {
		
		// Se for, guardar a quantidade de notas que a quantiaTotal possui
		notas2 = quantiaTotal / 2;
		
		// Armazenar o restante para as próximas verificações
		quantiaTotal %= 2;
	}
	
	// Verificando se é possível extrair moedas de 1 na quantia a seguir
	if(quantiaTotal >= 1) {
	
		// Se for, guardar a quantidade de moedas que a quantiaTotal possui
		moedas1 = quantiaTotal / 1;
		
		// Armazenar o restante
		quantiaTotal %= 1;
	}
	
	// Exibindo resultados
	printf("\n%d notas de 100", notas100);
	printf("\n%d notas de 50", notas50);
	printf("\n%d notas de 20", notas20);
	printf("\n%d notas de 10", notas10);
	printf("\n%d notas de 5", notas5);
	printf("\n%d notas de 2", notas2);
	printf("\n%d moedas de 1", moedas1);
	
	
		
}

