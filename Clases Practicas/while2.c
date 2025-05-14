#include <stdio.h>

/* Calcular el perimetro de un cuadrado solamente cuando el valor ingresado sea correcto(positivo). 
Ingresar la cant de veces que se verificará que el valor ingresado sea correcto*/

//Hacer la modificacion para que se pueda realizar otro calculo, si el usuario lo desea

int main(int argc, char *argv[]) {
	
	int lado = -1;
	int c = 0;
	
	while (lado < 0){
		printf("Ingrese el valor del lado del cuadrado: ");
		scanf("%d", &lado);
		if (lado > 0){
			int p = lado * 4;
			printf("\nEl perimetro del cuadrado es igual a %d.", p);
		}else{
			printf("\nEl valor ingresado es incorrecto. Ingrese un valor valido.\n\n");
			c++;
		}
	}
	printf("\nLa cantidad de verificaciones fue de %d.", c);
	
	return 0;
}

