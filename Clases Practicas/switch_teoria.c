#include <stdio.h>

/* Dise�ar un programa que permita mostrar por pantalla el resultado de la tabla de verdad para una conjunci�n, disyunci�n e implicaci�n.
Se debe usar un men� de opciones para seleccionar la tabla a mostrar.(SWITCH) */

int main(int argc, char *argv[]) {
	
	int tabla;
	printf("Ingrese el numero de la tabla que desea ver\n\n");
	printf("\t\t1. Conjunci�n\n\t\t2. Disyunci�n\n\t\t3. Implicaci�n\n\nIngrese el numero: ");
	scanf("%d", &tabla);
	
	switch(tabla){
	case 1:
		printf("p | q | p ^ q\n");
		printf("--------------\n");
		printf("V | V |   V\n");
		printf("V | F |   F\n");
		printf("F | V |   F\n");
		printf("F | F |   F\n");
		break;
	case 2:
		printf("p | q | p v q\n");
		printf("--------------\n");
		printf("V | V |   V\n");
		printf("V | F |   V\n");
		printf("F | V |   V\n");
		printf("F | F |   F\n");
		break;
	case 3:
		printf("p | q | p -> q\n");
		printf("--------------\n");
		printf("V | V |   V\n");
		printf("V | F |   F\n");
		printf("F | V |   V\n");
		printf("F | F |   V\n");
		break;
	}
	
	return 0;
}

