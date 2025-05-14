/* Programa que permite ingresar 3 numeros y los ordena de mayor a menor. */

#include <stdio.h>

int main() {
	
	int numero1, numero2, numero3;
	
	printf("Ingrese los valores para realizar la lista, ordenando los numeros del mayor al menor\n\n");
	printf("Ingrese el primer valor: ");
	scanf("%d", &numero1);
	printf("\nIngrese el segundo valor: ");
	scanf("%d", &numero2);
	printf("\nIngrese el tercer valor: ");
	scanf("%d", &numero3);
	
	if((numero1 > numero2) & (numero1 > numero3)){
		if(numero2 > numero3){
			printf("\n\t1. %d \n\t2. %d \n\t3. %d", numero1, numero2, numero3);
		}else{
			printf("\n\t1. %d \n\t2. %d \n\t3. %d", numero1, numero3, numero2);
		}
	}else if((numero2 > numero1) & (numero2 > numero3)){
		if(numero1 > numero3){
			printf("\n\t1. %d \n\t2. %d \n\t3. %d", numero2, numero1, numero3);
		}else{
			printf("\n\t1. %d \n\t2. %d \n\t3. %d", numero2, numero3, numero1);
		}
	}else if((numero3 > numero2) & (numero3 > numero1)){
		if(numero1 > numero2){
			printf("\n\t1. %d \n\t2. %d \n\t3. %d", numero3, numero1, numero2);
		}else{
			printf("\n\t1. %d \n\t2. %d \n\t3. %d", numero3, numero2, numero1);
		}
	}
	return 0;
}

