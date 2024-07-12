/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computa��o
	Prof.� Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exerc�cios I
	
	QUEST�O 01: 
	O custo ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem
	do distribuidor e dos impostos (aplicados ao custo de f�brica). Desenvolver um algoritmo
	que calcule o custo ao consumidor de determinado carro.

*/

/*
	Declara��o de vari�veis:
	float --- tipo real (valores com v�rgula)
	
	Fun��es utilizadas: 
	printf() --- Imprime uma mensagem para o usu�rio
	scanf() --- Recebe o valor inserido pelo usu�rio e atribui para a vari�vel
	
	Escopos:
	%f --- tratamento com vari�veis de tipo float

*/

// Importa��o de bibliotecas
#include <stdio.h>

// Fun��o principal
void main() {
	
	// Inicializando vari�veis
	float custoConsumidor;
	float custoFabrica;
	float porcentagemDistribuidor;
	
	// Solicitando o custo de f�brica
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


