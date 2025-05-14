#include <stdio.h>


int main() {
	float a, b, c; //Estan inicializados como enteros pero se esperan datos flotantes
	
	printf("Ingrese los valores para realizar la operacion resta\n");
	printf("Ingrese el primer valor\n");
	scanf("%f", &a);
	printf("Ingrese el segundo valor\n");
	scanf("%f", &b); //El segundo valor se guarda en la segunda variable, no sobreescribir variable
	c = a-b;
	printf("\nEl resultado de la resta es: %g", c); //Utilizar %f o %g para datos de tipos flotante
	
	return 0;
}
