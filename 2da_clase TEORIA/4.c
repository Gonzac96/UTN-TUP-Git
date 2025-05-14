#include <stdio.h>
#include <conio.h>

int main() {
	int a, b;
	
	printf("Ingrese un valor entero: ");
	scanf("%d", &a);
	printf("\nIngrese otro valor entero: ");
	scanf("%d", &b);
	int x = a+b;
	printf("\n\nLa suma de los valores ingresados es igual a: %d", x);
	
	return 0;
}

