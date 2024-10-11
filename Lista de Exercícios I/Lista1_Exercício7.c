/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computação
	Prof.° Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exercícios I
	
	QUESTÃO 07: 
	Escreva um algoritmo para calcular o salário semanal de uma pessoa, determinado pelas
	condições que seguem: se o número de horas trabalhado for inferior ou igual a 40, a pessoa
	recebe x reais por hora; caso contrário, a pessoa recebe um adicional de 50% para cada
	hora trabalhada acima das 40 iniciais.

*/

/*
	Declaração de variáveis:
	int --- tipo inteiro (valores inteiros)
	float --- tipo real (valores com vírgula)
	
	Funções utilizadas: 
	printf() --- Imprime uma mensagem para o usuário
	scanf() --- Recebe o valor inserido pelo usuário e atribui para a variável
	if() { } --- Verifica uma condição (se ... é ...)
	else { } --- Verifica se a condição do if não foi atendida

	Escopos:
	%d --- tratamento com variáveis de tipo int
	%f --- tratamento com variáveis de tipo float

	Operadores:
	+ (soma)
	- (subtração)
	* (multiplicação)
	/ (divisão)
	<= (menor ou igual que)
	
	[OBSERVAÇÃO: %.2f indica que duas casas decimais do float serão exibidas. Exemplo: 2.02]
	

*/

// Importação de bibliotecas
#include <stdio.h>

// Função principal
void main() {
	
	// Inicializando variáveis
	int horasTrabalhadas, horasAcima;
	float valorAdicional, valorHora, valorSalario, valorExtra;

	// Solicitando as horas trabalhadas ao usuário
	printf("Horas trabalhadas: ");
	scanf("%d", &horasTrabalhadas);
	
	// Solicitando o valor por horas de trabalho
	printf("Valor por horas de trabalho: R$");
	scanf("%f", &valorHora);
	
	// Calculando o valor do salário
	valorSalario = horasTrabalhadas * valorHora;
	
	// Se as horas trabalhadas for menor ou igual a 40,
	if(horasTrabalhadas <= 40) {
		
		// Exibindo resultados
		printf("Salario semanal = R$%.2f", valorSalario);
		
	} else {
		
		
		// Calculando a quantidade de horas trabalhadas acima de 40h
		horasAcima = horasTrabalhadas - 40;
		
		// Calculando o valor extra
		valorExtra = horasAcima * valorHora;
		
		// Atribuindo o adicional
		valorAdicional = (valorExtra * 50) / 100;
		
		// Exibindo resultados de adicional e o salário semanal
		printf("\nAdicional = R$%.2f", valorAdicional);
		printf("\nSalario semanal = R$%.2f", valorSalario + valorAdicional);		
		
	}
	
	
		
}
