#include <stdio.h>



// Función para cargar la matriz 3x3
void cargarMatriz(int matriz[3][3]) {
	printf("Ingrese los números de la matriz 3x3:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Número [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

// Función para calcular el promedio de una fila
float calcularPromedioFila(int fila[]) {
	int suma = 0;
	for (int i = 0; i < 3; i++) {
		suma += fila[i];
	}
	return (float)suma / 3;
}

// Función para calcular el promedio general de la matriz
float calcularPromedioGeneral(int matriz[3][3]) {
	int sumaTotal = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sumaTotal += matriz[i][j];
		}
	}
	return (float)sumaTotal / 9;
}

int main() {
	int matriz[3][3];
	
	cargarMatriz(matriz);
	
	printf("\nPromedio por fila:\n");
	for (int i = 0; i < 3; i++) {
		float promedio = calcularPromedioFila(matriz[i]);
		printf("Fila %d: %.2f\n", i + 1, promedio);
	}
	
	float promedioGral = calcularPromedioGeneral(matriz);
	printf("\nPromedio general de la matriz: %.2f\n", promedioGral);
	
	return 0;
}
