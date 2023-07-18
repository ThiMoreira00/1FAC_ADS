#include <stdio.h>

void exibirVetor (int vetor[], int tamanho);
void somarVetores (int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int resultado[], int tamanhoResultado);

void main() {
	
	int vetorA[3] = {1, 8, 3};
	int vetorB[3] = {2, 0, 9};
	int resultado[3] = {0, 0, 0};
	
	somarVetores(vetorA, 3, vetorB, 3, resultado, 3);
	
	exibirVetor(vetorA, 3);
	exibirVetor(vetorB, 3);
	exibirVetor(resultado, 3);
}

void somarVetores (int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int resultado[], int tamanhoResultado) {
	
	int i, j, soma, resto;
	
	for(i=tamanhoA-1,j=tamanhoResultado-1;i>=0;i--,j--) {
		
		soma = vetorA[i] + vetorB[i];
		if(soma > 9) {
			resto = soma - 10;
			resultado[j] += resto;
			resultado[j-1]++;
		}
		else {
			resultado[j] += soma;	
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
