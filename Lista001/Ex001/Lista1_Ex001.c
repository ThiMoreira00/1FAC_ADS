/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computa��o
	Prof.� Leonardo Vianna
	
	Lista de Exerc�cios I
	
	
	QUEST�O 01: 
	O custo ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem
	do distribuidor e dos impostos (aplicados ao custo de f�brica). Desenvolver um algoritmo
	que calcule o custo ao consumidor de determinado carro.
	
*/

// Importa��o de bibliotecas
#include <stdio.h>

// Fun��o main
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
