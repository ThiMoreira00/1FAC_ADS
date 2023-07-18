/*

	1FAC - Manhã - 2023.1 [Avaliação II]
 	Professor Leonardo Vianna
  	Monitor Thiago Moreira

	QUESTÃO 04 [2,5 pontos]:  

	Considere que os algarismos de um número inteiro e positivo sejam armazenados em posições de um vetor, de forma que o algarismo que representa as unidades seja armazenado na última posição, o das dezenas na penúltima e, assim, sucessivamente.  
	Fazer uma função que, dados dois vetores com estas características, ambos com a mesma quantidade de algarismos armazenados, gere o vetor resultado que  simule a soma algarismo a algarismo que fazemos, conforme ilustrado no exemplo abaixo:  
	  
	numero1 = [8 1 3 6 4 7 2]
	numero2 = [1 5 2 7 0 4 6]
	resultado = [9 6 6 3 5 1 8]

	Notas:  
	i. Não esquecer que o “vai-um” pode ocorrer em  qualquer posição, inclusive na última soma de algarismos;  
	ii. Apresentar a main chamando a função solicitada e, ao  final, exibindo o resultado.  

*/

// Importação de bibliotecas
#include <stdio.h>

// Protótipo das funções
void exibirVetor (int vetor[], int tamanho);
void somarVetores (int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int resultado[], int tamanhoResultado);

// Função main
void main() {
	
	// Declaração de variáveis
	int vetorA[7] = {8, 1, 3, 6, 4, 7, 2};
	int vetorB[7] = {1, 5, 2, 7, 0, 4, 6};
	int resultado[7] = {0, 0, 0, 0, 0, 0, 0};
	
	// Chamada da função
	somarVetores(vetorA, 7, vetorB, 7, resultado, 7);
	
	// Exibindo vetores
	exibirVetor(vetorA, 7);
	exibirVetor(vetorB, 7);
	exibirVetor(resultado, 7);
}

// Função somarValores (avaliativa)
void somarVetores (int vetorA[], int tamanhoA, int vetorB[], int tamanhoB, int resultado[], int tamanhoResultado) {
	
	// Declaração de variáveis
	int i, j, soma, resto;
	
	// Percorrendo os vetores de forma decrescente (primeiro, as unidades; após, as dezenas...)
	for(i=tamanhoA-1,j=tamanhoResultado-1;i>=0;i--,j--) {
		
		// Calculando a soma dos dois algarismos
		soma = vetorA[i] + vetorB[i];

		// Se for maior que 9, precisará do "vai-um"
		if(soma > 9) {

			// Atribuindo o valor para resto e atualizando os valores
			resto = soma - 10;
			resultado[j] += resto;
			resultado[j-1]++;
		}
		// Senão...
		else {
			// Adicionando o resultado com o valor que está na posição
			resultado[j] += soma;	
		}	
	}		
}

// Função exibirVetor
void exibirVetor (int vetor[], int tamanho) {
	
	// Declaração de variáveis	
	int i;
	
	// Percorrendo o vetor + exibindo os valores de cada posição
	printf("\n\nVetor: ");
	for(i=0;i<tamanho;i++) {
		printf("%d ", vetor[i]);
	}
	
}
