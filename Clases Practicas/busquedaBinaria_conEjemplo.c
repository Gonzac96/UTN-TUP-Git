#include <stdio.h>

int busquedaBinaria(int arreglo[], int tamanio, int objetivo) {
	int inicio = 0;
	int fin = tamanio - 1;
	
	while (inicio <= fin) {
		int medio = (inicio + fin) / 2;
		
		if (arreglo[medio] == objetivo) {
			return medio; // Devuelve el índice
		} else if (arreglo[medio] < objetivo) {
			inicio = medio + 1;
		} else {
			fin = medio - 1;
		}
	}
	
	return -1; // No encontrado
}

int main() {
	int datos[] = {3, 4, 7, 10, 15, 20, 25}; // Debe estar ORDENADO
	int tamanio = sizeof(datos) / sizeof(datos[0]);
	int numero;
	
	printf("Ingrese el número a buscar: ");
	scanf("%d", &numero);
	
	int resultado = busquedaBinaria(datos, tamanio, numero);
	
	if (resultado != -1) {
		printf("\nNúmero encontrado en la posición %d.\n", resultado+1);
	} else {
		printf("\nNúmero no encontrado.\n");
	}
	
	return 0;
}
