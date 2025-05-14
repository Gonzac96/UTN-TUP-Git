/*
29 de abril. prog1.txt el archivo donde esta el ejercicio
*/

#include <stdio.h>

int main() {
	
	int arreglo1[10] = {2, 5, 7, 1, 23, 2, 3, 9, 8, 15};
	int suma = 0;
	
	
	for(int i=0; i < 10; i++){
		if(i != 9){
			printf("%d--", arreglo1[i]);
		} else {
			printf("%d\n\n", arreglo1[i]);
		}
	}
	for(int i=0; i < 10; i++){
		suma = suma + i;
	}
	printf("La suma de los numeros del arreglo es igual a %d\n", suma);
	printf("El promedio de los numeros del arreglo es igual a %.2f\n\n", (float)suma/10);
	
	printf("Los elementos mayores a la mitad del promedio son: ");
	for(int i=0; i < 10; i++){
		if (arreglo1[i] > (float)suma/20){
			printf("%d ", arreglo1[i]);
		}
	}
	
	int posicion;
	printf("\n\nIngresar una posicion del arreglo: ");
	scanf("%d", &posicion);
	printf("\nEn la posicion %d se encuentra el elemento %d", posicion, arreglo1[posicion-1]);
	
	
	int valorBuscado;
	printf("\n\nIngresar un valor para saber si se encuentra en el arreglo: ");
	scanf("%d", &valorBuscado);
	for(int i=0; i < 10; i++){
		if(valorBuscado == arreglo1[i]){
			printf("\nEl valor si se encuentra en el arreglo.");
			break;
		} else if(valorBuscado != arreglo1[i] && i == 9){
			printf("\nEl valor no se encuentra en el arreglo.");
		}
	}
	
	
	
	return 0;
}

