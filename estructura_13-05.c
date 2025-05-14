#include <stdio.h>
#include <string.h>  // para memcpy si prefieres

int main() {
	
	struct estructura_amigo {
		char nombre[20];
		char apellido[20];
		char telefono[20];
		int edad;
		int dni;
	};

	int elem = 0;
	printf("Ingrese la cant de amigos: ");
	scanf("%d", &elem);
	
	struct estructura_amigo amigo[elem];
	int i;
	for(i=0; i<elem; i++){
		printf("\nIngrese el nombre de su amigo %d: ", i+1);
		scanf("%s", &amigo[i].nombre);
		printf("\nIngrese el apellido de su amigo %d: ", i+1);
		scanf("%s", &amigo[i].apellido);
		printf("\nIngrese el telefono de su amigo %d: ", i+1);
		scanf("%s", &amigo[i].telefono);
		printf("\nIngrese la edad de su amigo %d: ", i+1);
		scanf("%d", &amigo[i].edad);
		printf("\nIngrese el DNI de su amigo %d: ", i+1);
		scanf("%d", &amigo[i].dni);
	}
	
	for(i=0; i<elem; i++){
		printf("\n\nGuardado el amigo %d: %s %s - Telefono %s - Edad %d - DNI %i",i+1, amigo[i].nombre, amigo[i].apellido, amigo[i].telefono, amigo[i].edad, amigo[i].dni);
	}
	
	int buscar_dni;
	printf("\n\n\n\tBusqueda de persona por DNI\nIngrese el DNI de la persona a buscar: ");
	scanf("%d", &buscar_dni);
	
	for(i=0; i<elem; i++){
		if(buscar_dni == amigo[i].dni){
			printf("\nLa persona con el DNI buscado se encuentra en la base de datos.");
			break;
		}
		if(buscar_dni != amigo[i].dni && i == elem - 1){
			printf("\nLa persona no se encuentra en la base de datos.");
		}
	}
	
	
	int c = 0, c1 = 0, c2 = 0;
	while(c < elem){
		if(amigo[c].edad > 20){
			c1++;
		} else {
			c2++;
		}
		c++;
	}
	printf("\n\nHay %d menores de 20 años(incluidos) y %d mayores de 20 años", c2, c1);
	
	// --- 2) Ordenamiento por burbuja según DNI (ascendente) ---
	for (int pass = 0; pass < elem - 1; pass++) {
		for (int j = 0; j < elem - pass - 1; j++) {
			if (amigo[j].dni > amigo[j + 1].dni) {
				// intercambiar amigo[j] y amigo[j+1]
				struct estructura_amigo tmp = amigo[j];
				amigo[j] = amigo[j + 1];
				amigo[j + 1] = tmp;
			}
		}
	}
	
	// --- 3) Mostrar todos ordenados ---
	printf("\n\n--- Lista de amigos ordenada por DNI ---\n");
	for (int i = 0; i < elem; i++) {
		printf("%d %s %s – Tel: %d – Edad: %d – DNI: %d\n",
			   i + 1,
			   amigo[i].nombre,
			   amigo[i].apellido,
			   amigo[i].telefono,
			   amigo[i].edad,
			   amigo[i].dni);
	}
	
	return 0;
}

