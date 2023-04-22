/*

	FAETERJ-Rio
	1FAC - Fundamentos de Algoritmos para Computação
	Prof.° Leonardo Vianna
	
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

// Importação de bibliotecas
#include <stdio.h>

// Função main
void main() {
	
	int idade;
	
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	
	
	if(idade >= 0 && idade <= 4 ) {
		printf("Infantil A");
	} 
	else {
		if(idade <= 7) {
			printf("Infantil B");
		} 
		else {
			if(idade <= 10) {
				printf("Infantil C");
			}
			else {
				if(idade <= 13) {
					printf("Juvenil A");
				} 
				else {
					if(idade <= 17) {
						printf("Juventil B");
					}
					else {
						printf("Adulto");
					}
				}
			}
		}
	}
	
	/*
	// Fazendo gambiarra com switch
	switch(idade) {
		
		case 0:
		case 1:
		case 2:
		case 3:
		case 4: printf("Infantil A");
				break;
		case 5:
		case 6:
		case 7: printf("Infantil B");
				break;
		case 8:
		case 9:
		case 10: printf("Infantil C");
				 break;
		case 11:
		case 12:
		case 13: printf("Juventil A");
				 break;
		case 14: 
		case 15:
		case 16:
		case 17: printf("Juventil B");
				 break;
		default: printf("Adulto");
			
	}
	*/
	
}
