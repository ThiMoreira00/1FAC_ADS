/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computação
	Prof.° Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exercícios I
	
	QUESTÃO 01: 
	O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem
	do distribuidor e dos impostos (aplicados ao custo de fábrica). Desenvolver um algoritmo
	que calcule o custo ao consumidor de determinado carro.

*/

/*
	Declaração de variáveis:
	float --- tipo real (valores com vírgula)
	
	Funções utilizadas: 
	printf() --- Imprime uma mensagem para o usuário
	scanf() --- Recebe o valor inserido pelo usuário e atribui para a variável
	
	Escopos:
	%f --- tratamento com variáveis de tipo float

*/

// Importação de bibliotecas
#include <stdio.h>

// Função principal
void main() {
	
	// Inicializando variáveis
	float custoConsumidor;
	float custoFabrica;
	float porcentagemDistribuidor;
	
	// Solicitando o custo de fábrica
	printf("Insira o custo de fabrica: ");
	scanf("%f", &custoFabrica);
	
	// Solicitando a porcentagem do distribuidor
	printf("Insira a porcentagem do distribuidor (e dos impostos): ");
	scanf("%f", &porcentagemDistribuidor);
	
	// Calculando o custo do consumidor
	custoConsumidor = custoFabrica + (porcentagemDistribuidor/100) * custoFabrica;
	
	// Exibindo o custo total
	printf("\nCusto total do consumidor: R$%.2f", custoConsumidor);
	
}


