/* 

	1FAC - Manhã - 2023.1 [Avaliação II]
 	Professor Leonardo Vianna
  	Monitor Thiago Moreira

	QUESTÃO 03 [2,5 pontos]:  
	Implementar uma função que, dado um vetor de reais vet e um número inteiro n, determine o menor valor dentre aqueles maiores do que n, assim como o maior dentre são menores do que n.

	Nota: apresentar a main chamando a função solicitada.    


*/

// Importação de bibliotecas
#include <stdio.h>
#include <limits.h> 

// Protótipo das funções
void valoresVetor (float vetor[], int tamanho, int numero, int *menorValor, int *maiorValor);

// Função main
void main() {
	
	// Declaração de variáveis
	int menorValor, maiorValor;
	float vetor[7] = {8, 1, 3, 6, 4, 7, 2};
	
	// Chamando a função
	valoresVetor(vetor, 7, 5, &menorValor, &maiorValor);
	
	// Exibindo resultados
	printf("Menor valor: %d", menorValor);
	printf("\nMaior valor: %d", maiorValor);
	
}

// Função valoresVetor (avaliativa)
void valoresVetor (float vetor[], int tamanho, int numero, int *menorValor, int *maiorValor) {
	
	// Declaração de variáveis
	int i;
	
	// Inicializando os valores
	*menorValor = INT_MAX;
	*maiorValor = INT_MIN;
	
	// Percorrer o vetor
	for(i=0;i<tamanho;i++) {
		
		// calculando o maior valor
		if(vetor[i] > numero) {
			
			if(vetor[i] < *menorValor) {
				*menorValor = vetor[i];
			}
		}
		
		// calculando o menor valor
		if(vetor[i] < numero) {
			
			if(vetor[i] > *maiorValor) {
				*maiorValor = vetor[i];
			}
		}
	}
}
