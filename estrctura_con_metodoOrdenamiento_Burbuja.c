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
	printf("Ingrese la cantidad de amigos: ");
	scanf("%d", &elem);
	getchar();  // limpia el '\n' residual
	
	// VLA (Variable-Length Array) en C99
	struct estructura_amigo amigo[elem];
	
	// --- 1) Carga de datos ---
	for (int i = 0; i < elem; i++) {
		printf("\n--- Amigo %d ---\n", i + 1);
		printf("Nombre: ");
		scanf("%19s", amigo[i].nombre);
		printf("Apellido: ");
		scanf("%19s", amigo[i].apellido);
		printf("Teléfono: ");
		scanf("%19s", amigo[i].telefono);
		printf("Edad: ");
		scanf("%d", &amigo[i].edad);
		printf("DNI: ");
		scanf("%d", &amigo[i].dni);
	}
	
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
		printf("%2d) %s %s - Tel: %s - Edad: %d - DNI: %d\n",
			   i + 1,
			   amigo[i].nombre,
			   amigo[i].apellido,
			   amigo[i].telefono,
			   amigo[i].edad,
			   amigo[i].dni);
	}
	
	
	// --- 4) Búsqueda de persona por DNI ---
	int buscar_dni;
	printf("\n\n--- Búsqueda de persona por DNI ---\n");
	printf("Ingrese el DNI a buscar: ");
	scanf("%d", &buscar_dni);
	
	int encontrado = 0;
	for (int i = 0; i < elem; i++) {
		if (amigo[i].dni == buscar_dni) {
			printf("La persona %s %s con DNI %d se encuentra en la base de datos (posición %d).\n",
				   amigo[i].nombre, amigo[i].apellido, buscar_dni, i + 1);
			encontrado = 1;
			break;
		}
	}
	if (!encontrado) {
		printf("La persona con DNI %d NO se encuentra en la base de datos.\n", buscar_dni);
	}
	
	// --- 5) Conteo por edad ---
	int c1 = 0, c2 = 0;
	for (int i = 0; i < elem; i++) {
		if (amigo[i].edad > 20) c1++;
		else                c2++;
	}
	printf("\nHay %d menores de 20 años (incluidos) y %d mayores de 20 años.\n", c2, c1);
	
	return 0;
}
