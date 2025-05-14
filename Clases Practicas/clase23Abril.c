/*
Los padres de una ni�a le prometieron dar 10 pesos cuando cumpliera 12 a�os de edad y duplicar el regalo en cada cumplea�os, hasta llegar a los 1000 dolares.
Escriba un programa para determinar que edad tendria la ni�a cuando se le da la ultima cantidad y cuanto fue la ultima cant recibida.
*/

#include <stdio.h>

int main() {
	
	int edad = 12;
	int plataInicial = 10;
	int ultimaPlata;
	
	for(int i=plataInicial; i < 1000 + ultimaPlata; i= i * 2){
		printf("\nLa ni�a tendra %d pesos a sus %d a�os.\n", i, edad);
		edad++;
		ultimaPlata = i/2;
	}
	
	return 0;
}

