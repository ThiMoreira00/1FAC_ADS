/* 

	1FAC - Manhã - 2023.1 [Avaliação II]
 	Professor Leonardo Vianna
  	Monitor Thiago Moreira

	QUESTÃO 01 [2,5 pontos]:  
	Desenvolver uma função que, dado um número real  n, arredonde-o para o valor inteiro mais próximo.  
 
	Exemplos:  
	 	n = 4.67
   		Resposta: 5
     
     		n = 4.23
		Resposta: 4
       		
	  	n = 3.0
		Resposta: 3  
  
	Notas:  
	1. É proibido o uso de funções já existentes na linguagem que possuam este mesmo objetivo; 
 	2. Apresentar a main chamando a função solicitada.  

*/

// Importação de bibliotecas
#include <stdio.h>

// Protótipo da função
int arredondar(float n);

// Função main
void main() {

	// Declaração de variáveis
	float numero = 10.0;

	// Chamando a função + exibindo resultado
	printf("Resultado: %d", arredondar(numero));
}

// Função arredondar (avaliativa)
int arredondar (float n) {

	// Declaração de variáveis
	float resto = n - (int)n;

	// Verificando se o resto é menor a 1/2
	if(resto < 0.5) {

		// Se for, retorna o inteiro de N.
		return (int)n;
	}
	
	// Senão...
	else {
		// ... retorna o inteiro sucessor a N.
		return (int)n + 1;
	}
}
