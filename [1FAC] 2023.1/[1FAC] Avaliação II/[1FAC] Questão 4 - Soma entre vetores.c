#include <stdio.h>

void funcione (int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int resultado[], int tamanhoResultado);
void exibirVetor (int vetor[], int tamanho);

void main() {
	
	int vetorA[3] = {7, 3, 2};
	int vetorB[3] = {5, 3, 9};
	int resultado[4];
	
	funcione(vetorA, 3, vetorB, 3, resultado, 4);
	
	exibirVetor(vetorA, 3);
	exibirVetor(vetorB, 3);
	exibirVetor(resultado, 4);
}

void funcione (int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int resultado[], int tamanhoResultado) {
	
	int i, j;
	int aux, var;
	
	for(i=0;i<tamanhoA;i++) {
		resultado[i] = vetorA[i] + vetorB[i];
	}
	
	
	for(i=0;i<tamanhoA;i++) {
		
		if(resultado[i] > 9) {
			
			var = resultado[i] - 10;
			resultado[i] = 1;
			resultado[i+1] = var;
		}
	}
}

void exibirVetor (int vetor[], int tamanho) {
	
	int i;
	printf("\n\nVetor: ");
	for(i=0;i<tamanho;i++) {
		printf("%d ", vetor[i]);
	}
	
}
