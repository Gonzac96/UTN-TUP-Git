#include <stdio.h>
#include <conio.h>

int main() {
	
	char c[10];
	printf("Ingrese su nombre: ");
	gets(c);
	printf("\n\nEl nombre ingresado es: ");
	puts(c);	
	
	float p = 3.1415;
	printf("El numero p es: %g", p);
	
	//puts(c);
	printf("\nMi nombre es %s", c);
	
	return 0;
}
