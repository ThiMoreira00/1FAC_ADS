/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computa��o
	Prof.� Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exerc�cios I
	
	QUEST�O 06: 
	Fazer um algoritmo que determine a ordem de
	uma data (dia e m�s) no ano.
	
	Exemplos:
		01/01 - 1o dia do ano
		03/02 - 34o dia do ano

*/

/*
	Declara��o de vari�veis:
	int --- tipo inteiro (valores inteiros)
	
	Fun��es utilizadas: 
	printf() --- Imprime uma mensagem para o usu�rio
	scanf() --- Recebe o valor inserido pelo usu�rio e atribui para a vari�vel
	switch() --- Verifica uma condi��o de valores da vari�vel
	break; --- Quebra a execu��o da estrutura (switch)

	Escopos:
	%d --- tratamento com vari�veis de tipo int

	Operadores:
	+ (soma)
	
	[OBSERVA��O: %.2d indica que duas casas decimais do int ser�o exibidas. Exemplo: 03]
	

*/

// Importa��o de bibliotecas
#include <stdio.h>

// Fun��o principal
void main() {
	
	// Inicializando vari�veis
	int dataDia, dataMes, dataOrdem = 0;
	
	// Solicitando o dia e o m�s para o usuario
	printf("Insira o dia e o mes [DD MM]: ");
	scanf("%d %d", &dataDia, &dataMes);
	
	// Condicionando o m�s
	switch(dataMes) {
		
		// Se for janeiro, � o pr�prio dia
		case 1: dataOrdem = dataDia;
				break;
		
		// Se for fevereiro, soma os dias do m�s de janeiro com o dia
		case 2: dataOrdem = 31 + dataDia;
				break;
				
		// Se for mar�o, soma os dias de janeiro e fevereiro com o dia
		case 3: dataOrdem = 31 + 28 + dataDia;
				break;

		// Se for abril, soma os dias dos meses anteriores com o dia (janeiro, fevereiro e mar�o)
		case 4: dataOrdem = 31 + 28 + 31 + dataDia;
				break;
				
		// Se for maio, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, mar�o e abril)
		case 5: dataOrdem = 31 + 28 + 31 + 30 + dataDia;
				break;
				
		// Se for junho, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, mar�o, abril e maio)
		case 6: dataOrdem = 31 + 28 + 31 + 30 + 31 + dataDia;
				break;
			
		// Se for julho, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, mar�o, abril, maio e junho)
		case 7: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + dataDia;
				break;
				
		// Se for agosto, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, mar�o, abril, maio, junho e julho)
		case 8: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dataDia;
				break;
			
		// Se for setembro, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, mar�o, abril, maio, junho, julho e agosto)
		case 9: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dataDia;
				break;
				
		// Se for outubro, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, mar�o, abril, maio, junho, julho, agosto e setembro)
		case 10: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dataDia;
				break;

		// Se for novembro, soma os dias dos meses anteriores com o dia	(janeiro, fevereiro, mar�o, abril, maio, junho, julho, agosto, setembro e outubro)
		case 11: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dataDia;
				break;

		// Se for dezembro, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, mar�o, abril, maio, junho, julho, agosto, setembro, outubro e novembro)
		case 12: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dataDia;
				break;
				
		// Se a data for inv�lida
		default: printf("Data inv�lida! Tente novamente.");
				 return;
				
	}
	
	// Exibindo resultados
	printf("%.2d/%.2d: %do dia do ano", dataDia, dataMes, dataOrdem);
	
	
		
}
