/* 

	1FAC - Manhã - 2023.1 [Avaliação II]
 	Professor Leonardo Vianna
  	Monitor Thiago Moreira

	QUESTÃO 02 [2,5 pontos]:  
	Fazer uma função que, dado um número inteiro positivo n, determine se os seus algarismos estão ou não ordenados crescentemente.

	Exemplos:  
 	n = 3456  (estão ordenados)
  	n = 4563  (não estão ordenados)
   	n = 4 	  (estão ordenados)

	Nota: pode-se considerar que n é maior do que zero, sem a necessidade de validação.  

*/

// Importação de bibliotecas
#include <stdio.h>

// Protótipo da função
int verificarCrescente (int n);

// Função main
void main() {
	
	// Declaração de variáveis
	int numero = 4;
	
	// Verificando o resultado da função verificarCrescente
	switch(verificarCrescente(numero)) { 
		case 1: printf("Estao ordenados crescentemente.");
				break;
		case 0: printf("Nao estao ordenados crescentemente.");
	}
	
}

// Função verificarCrescente (avaliativa)
int verificarCrescente (int n) {
	
	// Declaração de variáveis
	int anterior, resto;
	
	// Verificar se o número for menor que 10
	if(n < 10) {
		return 1;
	}

	// Senão...
	else {
		
		// Analisando a composição dos algarismos do número, enquanto n for maior que 10
		do {
			anterior = n%10;
			n /= 10;
			resto = n%10;
			
			// Verificando se o resto é maior que o anterior, retornando caso não esteja ordenado crescentemente
			if(resto > anterior) { 
				return 0;
			}
			
		} while (n > 10);

		// Se chegou até aqui, significa que está ordenado.
		return 1; 
	}
}
