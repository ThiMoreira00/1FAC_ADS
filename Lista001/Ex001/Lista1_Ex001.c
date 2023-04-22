/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computação
	Prof.° Leonardo Vianna
	
	Lista de Exercícios I
	
	
	QUESTÃO 01: 
	O custo ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem
	do distribuidor e dos impostos (aplicados ao custo de fábrica). Desenvolver um algoritmo
	que calcule o custo ao consumidor de determinado carro.
	
*/

// Importação de bibliotecas
#include <stdio.h>

// Função main
void main() {
	
	float custoConsumidor;
	float custoFabrica;
	float porcentagemDistribuidor;
	
	printf("Insira o custo de fabrica: ");
	scanf("%f", &custoFabrica);
	
	printf("Insira a porcentagem do distribuidor (e dos impostos): ");
	scanf("%f", &porcentagemDistribuidor);
	
	
	custoConsumidor = custoFabrica + (porcentagemDistribuidor/100) * custoFabrica;
	
	printf("\nCusto total do consumidor: R$%.2f", custoConsumidor);
	
}
