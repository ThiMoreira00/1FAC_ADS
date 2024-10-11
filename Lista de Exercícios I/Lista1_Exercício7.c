/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computa��o
	Prof.� Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exerc�cios I
	
	QUEST�O 07: 
	Escreva um algoritmo para calcular o sal�rio semanal de uma pessoa, determinado pelas
	condi��es que seguem: se o n�mero de horas trabalhado for inferior ou igual a 40, a pessoa
	recebe x reais por hora; caso contr�rio, a pessoa recebe um adicional de 50% para cada
	hora trabalhada acima das 40 iniciais.

*/

/*
	Declara��o de vari�veis:
	int --- tipo inteiro (valores inteiros)
	float --- tipo real (valores com v�rgula)
	
	Fun��es utilizadas: 
	printf() --- Imprime uma mensagem para o usu�rio
	scanf() --- Recebe o valor inserido pelo usu�rio e atribui para a vari�vel
	if() { } --- Verifica uma condi��o (se ... � ...)
	else { } --- Verifica se a condi��o do if n�o foi atendida

	Escopos:
	%d --- tratamento com vari�veis de tipo int
	%f --- tratamento com vari�veis de tipo float

	Operadores:
	+ (soma)
	- (subtra��o)
	* (multiplica��o)
	/ (divis�o)
	<= (menor ou igual que)
	
	[OBSERVA��O: %.2f indica que duas casas decimais do float ser�o exibidas. Exemplo: 2.02]
	

*/

// Importa��o de bibliotecas
#include <stdio.h>

// Fun��o principal
void main() {
	
	// Inicializando vari�veis
	int horasTrabalhadas, horasAcima;
	float valorAdicional, valorHora, valorSalario, valorExtra;

	// Solicitando as horas trabalhadas ao usu�rio
	printf("Horas trabalhadas: ");
	scanf("%d", &horasTrabalhadas);
	
	// Solicitando o valor por horas de trabalho
	printf("Valor por horas de trabalho: R$");
	scanf("%f", &valorHora);
	
	// Calculando o valor do sal�rio
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
		
		// Exibindo resultados de adicional e o sal�rio semanal
		printf("\nAdicional = R$%.2f", valorAdicional);
		printf("\nSalario semanal = R$%.2f", valorSalario + valorAdicional);		
		
	}
	
	
		
}
