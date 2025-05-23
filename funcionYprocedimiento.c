/* a. cargar un arreglo entero de 10 elementos
	b. hacer la carga del arreglo en etapa de declaracion (aunque yo lo voy a hacer para que ingrese el usuario)
	c. mostrar el contenido del arreglo usando un procedimiento
	d. indicar cuantos numeros pares tiene el arreglo. Usar una funcion para determinar si el numero es par o no.
*/

#include <stdio.h>

//Procedimiento para mostrar el arreglo
void mostrar_arreglo(int arreglo[], int tamanio) {
	printf("Contenido del arreglo:");
	for (int i = 0; i < tamanio; i++) {
		if(i == tamanio - 1){
			printf(" %d", arreglo[i]);
		} else {
			printf(" %d -", arreglo[i]);
		}
	}
	printf("\n");
}

//Funcion para numeros pares
int cant_pares(int arreglo[], int tamanio){
	int c = 0;
	for (int i = 0; i < tamanio; i++) {
		if(arreglo[i]%2 == 0){
			c++;
		}
	}
	return printf("\nEl arreglo tiene %d numeros pares", c);
}

int main() {
	
	int arr[10];
	int elemento;
	
	for(int i=0; i < 10; i++){
		printf("Ingrese el elemento %d del arreglo: ", i+1);
		scanf("%d", &elemento);
		arr[i] = elemento;
	}
	
	printf("\n");
	mostrar_arreglo(arr, 10);
	
	printf("\n");
	int z = cant_pares(arr, 10);
	return z;
}

