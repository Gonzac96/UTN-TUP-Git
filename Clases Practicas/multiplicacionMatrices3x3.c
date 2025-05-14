/*
Crear un programa que multiplique los elementos de 2 matrices de 3x3, que contiene números enteros. 
Las dos matrices deben ser ingresadas por teclado por el usuario y luego mostrar el resultado de la forma más gráfica posible.
*/

#include <stdio.h>

int main() {
	int matriz1[3][3];
	int matriz2[3][3];
	int matrizResultado[3][3] = {0};
	
	printf("Ingrese los valores para la primera matriz (3x3):\n");
	for(int x = 0; x < 3; x++) {
		for(int y = 0; y < 3; y++) {
			printf("Matriz 1 [%d][%d]: ", x, y);
			scanf("%d", &matriz1[x][y]);
		}
	}

	printf("\nIngrese los valores para la segunda matriz (3x3):\n");
	for(int x = 0; x < 3; x++) {
		for(int y = 0; y < 3; y++) {
			printf("Matriz 2 [%d][%d]: ", x, y);
			scanf("%d", &matriz2[x][y]);
		}
	}
	
	// Multiplicación de matrices
	for(int x = 0; x < 3; x++) {
		for(int y = 0; y < 3; y++) {
			for(int z = 0; z < 3; z++) {
				matrizResultado[x][y] += matriz1[x][z] * matriz2[z][y];
			}
		}
	}
	
	printf("\nMatriz 1:\n");
	for(int x = 0; x < 3; x++) {
		for(int y = 0; y < 3; y++) {
			printf("%d\t", matriz1[x][y]);
		}
		printf("\n");
	}
	printf("\nMatriz 2:\n");
	for(int x = 0; x < 3; x++) {
		for(int y = 0; y < 3; y++) {
			printf("%d\t", matriz2[x][y]);
		}
		printf("\n");
	}
	
	// Mostrar resultado
	printf("\nMatriz resultante (matriz1 x matriz2):\n");
	for(int x = 0; x < 3; x++) {
		for(int y = 0; y < 3; y++) {
			printf("%d\t", matrizResultado[x][y]);
		}
		printf("\n");
	}
	
	return 0;
}


