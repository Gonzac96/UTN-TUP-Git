/*
Ingresar una cadena por teclado. Mostrar la cadena, mostrarla tambien al reves e indicar cuantas veces aparece una vocal, que se ingresa por teclado.
Indicar cuantas veces aparece la siguiente secuencia de caracteres "ca".
Indicar si la cadena es un palindromo.
*/

#include <stdio.h>

void mostrar_cadena(char cadena[]){
	printf("La cadena es %s",cadena);
}

char reves_cadena (char cadena[]){
	char a = ' ';
	char palabra_reves[30];
	int k = 0;
	for (int i = 30; i < sizeof(cadena[30]); i--){
		if (cadena[i] != ' '){
			a = cadena[i];
			palabra_reves[k] = a;
			k++;
		}
	}
	return printf("\nLa cadena al reves es %s", palabra_reves);
}

int main() {
	
	
	char cadena[30];
	
	printf("Ingrese una cadena de caracteres: ");
	scanf("%s", &cadena);
	
	mostrar_cadena(cadena);
	
	char z = reves_cadena(cadena);
	
	return z;
}

