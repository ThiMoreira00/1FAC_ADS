/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computação
	Prof.° Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exercícios I
	
	QUESTÃO 04: 
	Um banco concederá um crédito especial aos
	seus clientes, variável com o saldo médio no
	último ano. Faça um algoritmo que calcule o
	valor do crédito de acordo com a tabela abaixo.
	
	Saldo Médio 							Percentual
	Inferior a R$ 1000,00 					nenhum crédito
	De R$ 1000,00 a R$ 1499,99 				20% do saldo médio
	De R$ 1500,00 a R$ 2499,99 				30% do saldo médio
	R$ 2500,00 ou mais						40% do saldo médio

*/

/*
	Declaração de variáveis:
	float --- tipo real (valores com vírgula)
	
	Funções utilizadas: 
	printf() --- Imprime uma mensagem para o usuário
	scanf() --- Recebe o valor inserido pelo usuário e atribui para a variável
	if() --- Verifica uma condição (se ... é ...)
	return --- Retorna a execução (ou encerra)
	
	[OBSERVAÇÃO: O if...else poderia ser utilizado neste exercício. Else é executado caso NÃO atenda a condição do if().]
	
	Escopos:
	%f --- tratamento com variáveis de tipo float
	
	[OBSERVAÇÃO: %.2f indica que apenas duas casas decimais do float serão exibidas. Exemplo: 10.00]

*/

// Importação de bibliotecas
#include <stdio.h>

// Função principal
void main() {
	
	// Inicializando variáveis
	float saldoMedio;
	float saldoCredito;
	
	// Solicitando o saldo médio
	printf("Insira o saldo medio do ultimo ano: R$");
	scanf("%f", &saldoMedio);
	
	// Verificando se o saldo é menor que 1000 (...999)
	if(saldoMedio < 1000) {
		printf("Infelizmente voce possui nenhum credito para receber.");
		return;
	}
	
	// Verificando se o saldo é menor que 1500 (1000...1499)
	if(saldoMedio < 1500) {
		saldoCredito = saldoMedio + (saldoMedio * 0.2);
		printf("Parabens! Voce recebeu 20 porcento do seu saldo medio em credito!\n");
		printf("Seu credito atual eh de: R$%.2f", saldoCredito);
		return;
	}
	
	// Verificando se o saldo é menor que 2500 (1500...2499)
	if(saldoMedio < 2500) {
		saldoCredito = saldoMedio + (saldoMedio * 0.3);
		printf("Parabens! Voce recebeu 30 porcento do seu saldo medio em credito!\n");
		printf("Seu credito atual eh de: R$%.2f", saldoCredito);
		return;
	}
	
	// Se não atendeu nenhuma das condições acima, significa que o saldo é maior ou igual que 2500
	saldoCredito = saldoMedio + (saldoMedio * 0.4);
	printf("Parabens! Voce recebeu 40 porcento do seu saldo medio em credito!\n");
	printf("Seu credito atual eh de: R$%.2f", saldoCredito);
	return;
		
}
