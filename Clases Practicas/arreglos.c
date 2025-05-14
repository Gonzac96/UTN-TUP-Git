/*
Problema de hoy: Crear un programa que recorra un arreglo de enteros y al encontrar números impares, duplique su valor y muestre el nuevo arreglo con esos valores.
Arreglo original: [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,98,12]
*/

#include <stdio.h>

int main() {
	
	int arreglo1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,98,12};
	int size = sizeof(arreglo1) / sizeof(arreglo1[0]);
	
	int arregloModificado[size]; //de esta forma, el arreglo original mantiene su valor
	
	for (int i=0; i < size; i++){
		if (arreglo1[i] % 2 != 0) {
			arregloModificado[i] = arreglo1[i] * 2;
		} else{
			arregloModificado[i] = arreglo1[i];
		}
	}
	printf("\nArreglo modificado:\n");
	for (int i = 0; i < size; i++) {
		printf("numeros[%d] = %d\n", i, arregloModificado[i]);
	}
	
	return 0;
}

