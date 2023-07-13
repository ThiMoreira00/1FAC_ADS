#include <stdio.h>
#include <limits.h>

void valoresVetor (float vetor[], int tamanho, int numero, int *menorValor, int *maiorValor);

void main() {
	
	int menorValor, maiorValor;
	float vetor[7] = {8, 1, 3, 6, 4, 7, 2};
	
	
	valoresVetor(vetor, 7, 5, &menorValor, &maiorValor);
	
	
	printf("Menor valor: %d", menorValor);
	printf("\nMaior valor: %d", maiorValor);
	
}

void valoresVetor (float vetor[], int tamanho, int numero, int *menorValor, int *maiorValor) {
	
	
	int i, menorMaior = INT_MAX, maiorMenor = INT_MIN;
	
	*menorValor = INT_MAX;
	*maiorValor = INT_MIN;
	

	for(i=0;i<tamanho;i++) {
		
		// calculando o maior valor
		if(vetor[i] > numero) {
			
			if(vetor[i] < *menorValor) {
				*mValor = vetor[i];
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
