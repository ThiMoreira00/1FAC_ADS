/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computa��o
	Prof.� Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exerc�cios I
	
	QUEST�O 04: 
	Um banco conceder� um cr�dito especial aos
	seus clientes, vari�vel com o saldo m�dio no
	�ltimo ano. Fa�a um algoritmo que calcule o
	valor do cr�dito de acordo com a tabela abaixo.
	
	Saldo M�dio 							Percentual
	Inferior a R$ 1000,00 					nenhum cr�dito
	De R$ 1000,00 a R$ 1499,99 				20% do saldo m�dio
	De R$ 1500,00 a R$ 2499,99 				30% do saldo m�dio
	R$ 2500,00 ou mais						40% do saldo m�dio

*/

/*
	Declara��o de vari�veis:
	float --- tipo real (valores com v�rgula)
	
	Fun��es utilizadas: 
	printf() --- Imprime uma mensagem para o usu�rio
	scanf() --- Recebe o valor inserido pelo usu�rio e atribui para a vari�vel
	if() --- Verifica uma condi��o (se ... � ...)
	return --- Retorna a execu��o (ou encerra)
	
	[OBSERVA��O: O if...else poderia ser utilizado neste exerc�cio. Else � executado caso N�O atenda a condi��o do if().]
	
	Escopos:
	%f --- tratamento com vari�veis de tipo float
	
	[OBSERVA��O: %.2f indica que apenas duas casas decimais do float ser�o exibidas. Exemplo: 10.00]

*/

// Importa��o de bibliotecas
#include <stdio.h>

// Fun��o principal
void main() {
	
	// Inicializando vari�veis
	float saldoMedio;
	float saldoCredito;
	
	// Solicitando o saldo m�dio
	printf("Insira o saldo medio do ultimo ano: R$");
	scanf("%f", &saldoMedio);
	
	// Verificando se o saldo � menor que 1000 (...999)
	if(saldoMedio < 1000) {
		printf("Infelizmente voce possui nenhum credito para receber.");
		return;
	}
	
	// Verificando se o saldo � menor que 1500 (1000...1499)
	if(saldoMedio < 1500) {
		saldoCredito = saldoMedio + (saldoMedio * 0.2);
		printf("Parabens! Voce recebeu 20 porcento do seu saldo medio em credito!\n");
		printf("Seu credito atual eh de: R$%.2f", saldoCredito);
		return;
	}
	
	// Verificando se o saldo � menor que 2500 (1500...2499)
	if(saldoMedio < 2500) {
		saldoCredito = saldoMedio + (saldoMedio * 0.3);
		printf("Parabens! Voce recebeu 30 porcento do seu saldo medio em credito!\n");
		printf("Seu credito atual eh de: R$%.2f", saldoCredito);
		return;
	}
	
	// Se n�o atendeu nenhuma das condi��es acima, significa que o saldo � maior ou igual que 2500
	saldoCredito = saldoMedio + (saldoMedio * 0.4);
	printf("Parabens! Voce recebeu 40 porcento do seu saldo medio em credito!\n");
	printf("Seu credito atual eh de: R$%.2f", saldoCredito);
	return;
		
}
