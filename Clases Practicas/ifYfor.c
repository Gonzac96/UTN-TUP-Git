/*
Realizar un programa que pida al usuario dos numeros y una letra("Y" o "P"). 
El programa presentara los numeros pares si se utiliza la letra "P" o los impares si se utiliza la letra "Y".
Los numeros que se muestran van desde el primer numero ingresado al segundo.
Si se pulsa una tecla distinta a "P" o "Y", el programa no imprime ningun numero. 
*/

#include <stdio.h>

int main() {
	
	int numero1;
	int numero2;
	char letra = ' ';
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &numero1);
	printf("\nIngrese el segundo numero: ");
	scanf("%d", &numero2);
	printf("\nIngrese la letra p (para mostrar los pares) o y (para mostrar los impares): ");
	scanf(" %c", &letra);
	
	if(letra == 'p'){
		for(int i=numero1; i <= numero2; i++){
			if(i%2 == 0){
				printf("%d, ", i);
			}
		}
	}
	if(letra == 'y'){
		for(int i=numero1; i <= numero2; i++){
			if(i%2 != 0){
				printf("%d ", i);
			}
		}
	}
	
	if(letra != 'y' || letra != 'p'){
		printf("\nIngreso una letra incorrecta.");
	}
	
	
	
	return 0;
}

