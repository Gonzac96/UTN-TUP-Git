/*
Escribir un programa que permita cargar como entrada una matriz de 3x3 de numeros entero por teclado.
Mostrar la matriz usando un procedimiento.

Usar una sentencia switch para seleccionar el calculo que desea realizar:
1- calcular la posici�n de punto de silla si existe. Usar un procedimiento o funci�n seg�n
considere necesario. Un punto de silla de una matriz es un elemento que es a la vez el elemento
m�s grande de su columna y el elemento m�s peque�o de su fila.
2- determinar si la matriz es un cuadrado m�gico o no. un cuadrado m�gico es una matriz de 3x3
formada por n�meros del 1 al 9 donde la suma de sus filas, sus columnas y sus diagonales son
identicas. Usar una funci�n o un procedimiento seg�n considere necesario.

Sumar las filas o las columnas para calcular el cuadrado magico.
*/

#include <stdio.h>

//Procedimiento para mostrar la matriz
void mostrar_matriz(int matriz[][], int tamanio) {
	printf("La matriz ingresada es :\n");
	for (int i = 0; i < tamanio; i++) {
		if(i == tamanio - 1){
			printf(" %d", arreglo[i]);
		} else {
			printf(" %d -", arreglo[i]);
		}
	}
	printf("\n");
}

int main() {
	
	int matriz[3][3];
	int elemento;
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
		printf("Ingrese el elemento [%d] [%d] de la matriz: ", i+1, j+1);
		scanf("%d", &elemento);
		matriz[i][j] = elemento;
		}
	}
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}



