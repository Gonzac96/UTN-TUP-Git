/*
Ejercicio 2

Implementá un programa que permita guardar hasta 5 contactos en una agenda. 
Cada contacto debe tener nombre, teléfono y email.
Permití insertar los datos y luego mostrar todos los contactos guardados en una tabla.
*/

#include <stdio.h>

int main() {
	
	struct contactos {
		char nombre[20];
		char email[20];
		char telefono[20];
	};
	
	int elem = 0;
	printf("Ingrese la cantidad de contactos(max 5): ");
	scanf("%d", &elem);
	
	struct contactos contacto[elem];
	
	if (elem <= 5){
		for(int i=0; i<elem; i++){
			printf("\nIngrese el nombre del contacto %d: ", i+1);
			scanf("%s", &contacto[i].nombre);
			printf("\nIngrese el email del contacto %d: ", i+1);
			scanf("%s", &contacto[i].email);
			printf("\nIngrese el telefono del contacto %d: ", i+1);
			scanf("%s", &contacto[i].telefono);
		} else {
			printf("\nError");
		}
		
		printf("\n\n");
		printf("Nombre \t\t\t Email \t\t\t Telefono\n");
		printf("------------------------------------------------------------------\n");
		for(int i=0; i<elem; i++){
			printf("%-15s \t %-15s \t %-15s\n", contacto[i].nombre, contacto[i].email, contacto[i].telefono);
		}
	}
	
	return 0;
}

