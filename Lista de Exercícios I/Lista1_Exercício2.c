/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computa��o
	Prof.� Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exerc�cios I
	
	QUEST�O 02: 
	Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
	
	Categoria 			Faixa de idade
	Infantil A 			0-4 anos
	Infantil B 			5-7 anos
	Infantil C 			8-10 anos
	Juvenil A 			11-13 anos
	Juvenil B 			14-17 anos
	Adulto 				18 anos ou mais

*/

/*
	Declara��o de vari�veis:
	int --- tipo inteiro (valores naturais)
	
	Fun��es utilizadas: 
	printf() --- Imprime uma mensagem para o usu�rio
	scanf() --- Recebe o valor inserido pelo usu�rio e atribui para a vari�vel
	if() --- Verifica uma condi��o (se ... � ...)
	return --- Retorna a execu��o (ou encerra)
	
	[OBSERVA��O: O if...else poderia ser utilizado neste exerc�cio. Else � executado caso N�O atenda a condi��o do if().]
	
	Escopos:
	%d --- tratamento com vari�veis de tipo int

*/

// Importa��o de bibliotecas
#include <stdio.h>

// Fun��o principal
void main() {
	
	// Inicializando vari�veis
	int idadeNadador;
	
	// Solicitando a idade
	printf("Insira a sua idade: ");
	scanf("%d", &idadeNadador);
	
	// Verificando se a idade do nadador � menor que 0
	if(idadeNadador < 0) {
		printf("Idade inv�lida!");
		return;
	}
	
	// Verificando se a idade do nadador est� entre 0 e 4
	if(idadeNadador >= 0 && idadeNadador <= 4 ) {
		printf("Infantil A");
		return;
	}
	
	// Verificando se a idade do nadador � menor ou igual a 7
	if(idadeNadador <= 7) {
		printf("Infantil B");
		return;
	} 
	
	// Verificando se a idade do nadador � menor ou igual a 10
	if(idadeNadador <= 10) {
		printf("Infantil C");
		return;
	}
	
	// Verificando se a idade do nadador � menor ou igual a 13
	if(idadeNadador <= 13) {
		printf("Juvenil A");
		return;
	} 
	
	// Verificando se a idade do nadador � menor ou igual a 17
	if(idadeNadador <= 17) {
		printf("Juventil B");
		return;
	}
	
	// Se n�o atendeu nenhuma das condi��es acima, significa que ele � adulto
	printf("Adulto");
	
}
