#include <stdio.h>
	
int main(int argc, char *argv[]) {
	
	int c = 1;
	int a;
	int suma = 0;
	
	while(c <= 5){
		printf("Ingrese un valor para sumar: ");
		scanf("%d", &a);
		suma = suma + a;
		c++;
	}
	printf("\nLa suma es igual a %d", suma);
	
	return 0;
}

