#include <stdio.h>

void leerArreglo(int *arreglo, int indice, int n);

int main() {
	
	int n;
	scanf("%d", &n);
	
	int arreglo[n];
	
	leerArreglo(arreglo, 0, n);
	putchar('\n');
	
	return 0;
}

void leerArreglo(int *arreglo, int indice, int n){
	if (indice < n){
		scanf("%d", &arreglo[indice]);
		indice++;
		leerArreglo(arreglo, indice, n);
	}
}

