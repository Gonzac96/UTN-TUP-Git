/* Ingresar un limite superior. El programa muestra los numeros primos entre uno y ese limite superior */

//ARREGLAR (el ejercicio esta en el repo del profe o en el grupo de ds)

#include <stdio.h>

int main() {
		
	int numero;
	printf("Ingrese el numero: ");
	scanf("%d", &numero);
	
	int g = numero;
	int modulo = numero % g;
	int c = 0;
	
	for(int i=numero; i > 0; i--){
		if(modulo == 0){
			c = c + 1;
			if(c > 2){
				printf("\nEl numero no es primo.");
				break;
			}
		}
	}
	
	return 0;
}

