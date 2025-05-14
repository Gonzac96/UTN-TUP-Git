// TP Arreglos: Busqueda y Ordenamiento

#include <stdio.h>
#include <conio.h>
#define final 10
#define max 5

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
	int datos[10]; // Debe estar ORDENADO
	printf("Ingrese los 10 elementos para el arreglo\n");
	for(int i=0; i < 10; i++){
		printf("Elemento para la posicion %d = ", i);
		scanf("%d", &datos[i]);
	}
	
	int aux, j;
	int n = max;
	/*ordenar de  mayor a menor*/
	for(int i=0;i<=n;i++){
		for(j=0;j<n-1;j++){
			if(datos[j]<=datos[j+1]){
				aux=datos[j]; 
				datos[j]=datos[j+1]; 
				datos[j+1]=aux;
			}
		}
	}
	printf("\n");
	
	for(int i=0;i<max;i++)
	{
		printf("%d-",datos[i]);
	}
	/*ordenar de menor a mayor*/
	for(int i=0;i<=n;i++){
		for(j=0;j<n-1;j++){
			if(datos[j]>=datos[j+1]){
				aux=datos[j];  datos[j]=datos[j+1];  datos[j+1]=aux;
			}
		}
	}
	for(int i=0;i<max;i++)
	{
		printf("%d-",datos[i]);
	}
	printf("\n");
	
	
	
	
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

