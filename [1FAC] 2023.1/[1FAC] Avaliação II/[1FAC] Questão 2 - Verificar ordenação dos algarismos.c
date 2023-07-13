#include <stdio.h>

int verificarCrescente (int n);

void main() {
	
	switch(verificarCrescente(4)) { 
		case 1: printf("Estao ordenados crescentemente.");
				break;
		case 0: printf("Nao estao ordenados crescentemente.");
	}
	
}

int verificarCrescente (int n) {
	
	int anterior, resto;
	
	if(n < 10) {
		return 1;
	}
	else {

		do {
			anterior = n%10;
			n /= 10;
			resto = n%10;
			
			if(resto > anterior) { 
				return 0;
			}
			
		} while (n > 10);
		return 1; 
		
	}
}
