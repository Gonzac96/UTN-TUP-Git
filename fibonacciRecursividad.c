/*
Escriba un programa con recursividad para secuencia de Fibonacci
*/

#include <stdio.h>

void imprimirFibonacciHasta(int a, int b, int limite, int esPrimero) {
	if (a > limite) {
		printf("\n");
		return;
	}
	
	if (!esPrimero) {
		printf(", ");
	}
	
	printf("%d", a);
	
	imprimirFibonacciHasta(b, a + b, limite, 0);
}



int main() {
	int limite;
	
	printf("Ingrese el límite máximo: ");
	scanf("%d", &limite);
	
	printf("Secuencia de Fibonacci hasta %d:\n", limite);
	imprimirFibonacciHasta(0, 1, limite, 1);
	
	printf("\n");
	
	return 0;
}


