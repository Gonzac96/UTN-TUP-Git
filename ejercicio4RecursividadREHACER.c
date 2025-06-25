/*
TP Recursividad - Ejercicio 4
Escribir una función recursiva que devuelva la suma de los primeros N enteros
*/

#include <stdio.h>

int suma(int a, int r){
	r = r + a;
	a = a - 1;
	if (a != 0){
		suma(a, r);
	}
	else{
		printf("\n");
		return r;
	}
}

int main() {
	
	int num;
	printf("Ingrese numero para suma de sus primeros N numeros enteros: ");
	scanf("%d", &num);
	
	suma(num, 0);
	
	
	return 0;
}

