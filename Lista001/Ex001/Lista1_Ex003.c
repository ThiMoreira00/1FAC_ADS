/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computa��o
	Prof.� Leonardo Vianna
	
	Lista de Exerc�cios I
	
	
	QUEST�O 03: 
	Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu g�nero e
	altura, utilizando as seguintes f�rmulas:
	
	* para homens: (72.7*h)-58
	* para mulheres: (62.1*h)-44.7
	
*/

// Importa��o de bibliotecas
#include <stdio.h>

// Fun��o main
void main() {
	
	float peso, altura;
	char genero;
	
	printf("Insira seu genero [H/M]: ");
	fflush(stdin);
	scanf("%c", &genero);
	genero = toupper(genero);
	
	
	if (genero == 'M' || genero == 'F') {
		
		printf("Insira sua altura: ");
		scanf("%f", &altura);
		
		switch(genero) {
			
			case 'H': 
				peso = (72.7 * altura) - 58;
				break;
			case 'M':
				peso = (62.1 * altura) - 44.7;
				break;
		}
		
		printf("O seu peso ideal eh %.2f.", peso);
	} 
	else {
		printf("Genero invalido! Tente novamente.");
	}
	
}
