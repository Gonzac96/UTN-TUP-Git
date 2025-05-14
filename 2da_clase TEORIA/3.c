#include <stdio.h>
#include <conio.h>

int main() {
	
	char c; float x; int i;
	
	printf("Ingrese un caracter: ");
	c = getchar();
	printf("\nIngrese un valor flotante: ");
	scanf("%g", &x);
	printf("\nIngrese un valor entero: ");
	scanf("%d", &i);
	printf("\n\nMostrar los valores ingresados\n\t");
	putchar(c);
	printf(" %d %g", i, x);
	
	return 0;
}

