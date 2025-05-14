/*
Los padres de una niña le prometieron dar 10 pesos cuando cumpliera 12 años de edad y duplicar el regalo en cada cumpleaños, hasta llegar a los 1000 dolares.
Escriba un programa para determinar que edad tendria la niña cuando se le da la ultima cantidad y cuanto fue la ultima cant recibida.
*/

#include <stdio.h>

int main() {
	
	int edad = 12;
	int plataInicial = 10;
	int ultimaPlata;
	
	for(int i=plataInicial; i < 1000 + ultimaPlata; i= i * 2){
		printf("\nLa niña tendra %d pesos a sus %d años.\n", i, edad);
		edad++;
		ultimaPlata = i/2;
	}
	
	return 0;
}

