/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computação
	Prof.° Leonardo Vianna
	Aluno Thiago Moreira
	
		Lista de Exercícios I
	
	QUESTÃO 06: 
	Fazer um algoritmo que determine a ordem de
	uma data (dia e mês) no ano.
	
	Exemplos:
		01/01 - 1o dia do ano
		03/02 - 34o dia do ano

*/

/*
	Declaração de variáveis:
	int --- tipo inteiro (valores inteiros)
	
	Funções utilizadas: 
	printf() --- Imprime uma mensagem para o usuário
	scanf() --- Recebe o valor inserido pelo usuário e atribui para a variável
	switch() --- Verifica uma condição de valores da variável
	break; --- Quebra a execução da estrutura (switch)

	Escopos:
	%d --- tratamento com variáveis de tipo int

	Operadores:
	+ (soma)
	
	[OBSERVAÇÃO: %.2d indica que duas casas decimais do int serão exibidas. Exemplo: 03]
	

*/

// Importação de bibliotecas
#include <stdio.h>

// Função principal
void main() {
	
	// Inicializando variáveis
	int dataDia, dataMes, dataOrdem = 0;
	
	// Solicitando o dia e o mês para o usuario
	printf("Insira o dia e o mes [DD MM]: ");
	scanf("%d %d", &dataDia, &dataMes);
	
	// Condicionando o mês
	switch(dataMes) {
		
		// Se for janeiro, é o próprio dia
		case 1: dataOrdem = dataDia;
				break;
		
		// Se for fevereiro, soma os dias do mês de janeiro com o dia
		case 2: dataOrdem = 31 + dataDia;
				break;
				
		// Se for março, soma os dias de janeiro e fevereiro com o dia
		case 3: dataOrdem = 31 + 28 + dataDia;
				break;

		// Se for abril, soma os dias dos meses anteriores com o dia (janeiro, fevereiro e março)
		case 4: dataOrdem = 31 + 28 + 31 + dataDia;
				break;
				
		// Se for maio, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, março e abril)
		case 5: dataOrdem = 31 + 28 + 31 + 30 + dataDia;
				break;
				
		// Se for junho, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, março, abril e maio)
		case 6: dataOrdem = 31 + 28 + 31 + 30 + 31 + dataDia;
				break;
			
		// Se for julho, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, março, abril, maio e junho)
		case 7: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + dataDia;
				break;
				
		// Se for agosto, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, março, abril, maio, junho e julho)
		case 8: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dataDia;
				break;
			
		// Se for setembro, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, março, abril, maio, junho, julho e agosto)
		case 9: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dataDia;
				break;
				
		// Se for outubro, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, março, abril, maio, junho, julho, agosto e setembro)
		case 10: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dataDia;
				break;

		// Se for novembro, soma os dias dos meses anteriores com o dia	(janeiro, fevereiro, março, abril, maio, junho, julho, agosto, setembro e outubro)
		case 11: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dataDia;
				break;

		// Se for dezembro, soma os dias dos meses anteriores com o dia (janeiro, fevereiro, março, abril, maio, junho, julho, agosto, setembro, outubro e novembro)
		case 12: dataOrdem = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dataDia;
				break;
				
		// Se a data for inválida
		default: printf("Data inválida! Tente novamente.");
				 return;
				
	}
	
	// Exibindo resultados
	printf("%.2d/%.2d: %do dia do ano", dataDia, dataMes, dataOrdem);
	
	
		
}
