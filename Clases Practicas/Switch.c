/* Programa que permite ingresar 2 valores enteros y realizar una operacion matematica con ellos */

#include <stdio.h>

int main() {
	
	int a, b, opcion;
	
	printf("Ingresar dos valores.\n");
	printf("Primer valor: ");
	scanf("%d", &a);
	printf("Segundo valor: ");
	scanf("%d", &b);
	
	printf("\n\t1.Suma\n\t2.Resta\n\t3.Multiplicación\n\t4.División");
	printf("\n\nIngrese el numero de que operacion quiere realizar entre ambos valores: ");
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1:
			printf("La suma de ambos valores es igual a %d", a+b);
			break;
		case 2:
			printf("La resta de ambos valores es igual a %d", a-b);
			break;
		case 3:
			printf("La multiplicación de ambos valores es igual a %d", a*b);
			break;
		case 4:
			if(b != 0){
				printf("La división de ambos valores es igual a %d", a/b);
			}else{
				printf("No se puede dividir por cero.");
			}
			break;
	}	
	return 0;
}

