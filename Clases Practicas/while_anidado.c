#include <stdio.h>

int main(int argc, char *argv[]) {

	int a;
	int b = 0;
	
	while(b == 0) {
		int c = 1;
		int suma = 0;
		while(c <= 5){
			printf("Ingrese un valor para sumar: ");
			scanf("%d", &a);
			suma = suma + a;
			c++;
		}
		printf("\nLa suma es igual a %d", suma);
		printf("\nPara realizar de vuelta la operacion presione 0. Para finalizar presione cualquier numero\n");
		scanf("%d", &b);
	}
	
	return 0;
}

