/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computação
	Prof.° Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exercícios I
	
	QUESTÃO 02: 
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
	Declaração de variáveis:
	int --- tipo inteiro (valores naturais)
	
	Funções utilizadas: 
	printf() --- Imprime uma mensagem para o usuário
	scanf() --- Recebe o valor inserido pelo usuário e atribui para a variável
	if() --- Verifica uma condição (se ... é ...)
	return --- Retorna a execução (ou encerra)
	
	[OBSERVAÇÃO: O if...else poderia ser utilizado neste exercício. Else é executado caso NÃO atenda a condição do if().]
	
	Escopos:
	%d --- tratamento com variáveis de tipo int

*/

// Importação de bibliotecas
#include <stdio.h>

// Função principal
void main() {
	
	// Inicializando variáveis
	int idadeNadador;
	
	// Solicitando a idade
	printf("Insira a sua idade: ");
	scanf("%d", &idadeNadador);
	
	// Verificando se a idade do nadador é menor que 0
	if(idadeNadador < 0) {
		printf("Idade inválida!");
		return;
	}
	
	// Verificando se a idade do nadador está entre 0 e 4
	if(idadeNadador >= 0 && idadeNadador <= 4 ) {
		printf("Infantil A");
		return;
	}
	
	// Verificando se a idade do nadador é menor ou igual a 7
	if(idadeNadador <= 7) {
		printf("Infantil B");
		return;
	} 
	
	// Verificando se a idade do nadador é menor ou igual a 10
	if(idadeNadador <= 10) {
		printf("Infantil C");
		return;
	}
	
	// Verificando se a idade do nadador é menor ou igual a 13
	if(idadeNadador <= 13) {
		printf("Juvenil A");
		return;
	} 
	
	// Verificando se a idade do nadador é menor ou igual a 17
	if(idadeNadador <= 17) {
		printf("Juventil B");
		return;
	}
	
	// Se não atendeu nenhuma das condições acima, significa que ele é adulto
	printf("Adulto");
	
}
