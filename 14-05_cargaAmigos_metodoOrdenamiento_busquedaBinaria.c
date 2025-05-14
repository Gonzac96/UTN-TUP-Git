#include <stdio.h>
#include <string.h>

struct estructura_amigo {
	char nombre[20];
	char apellido[20];
	char telefono[20];
	int edad;
	int dni;
};

// Función de búsqueda binaria por DNI
int buscar_dni_binaria(struct estructura_amigo arr[], int tam, int dni_buscado) {
	int izquierda = 0, derecha = tam - 1;
	
	while (izquierda <= derecha) {
		int medio = (izquierda + derecha) / 2;
		
		if (arr[medio].dni == dni_buscado) {
			return medio; // Devuelve la posición
		} else if (arr[medio].dni < dni_buscado) {
			izquierda = medio + 1;
		} else {
			derecha = medio - 1;
		}
	}
	return -1; // No encontrado
}

int main() {
	int elem = 0;
	printf("Ingrese la cantidad de amigos: ");
	scanf("%d", &elem);
	getchar();  // limpia el '\n' residual
	
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
	
	// --- 4) Búsqueda binaria de persona por DNI ---
	int buscar_dni;
	printf("\n\n--- Búsqueda de persona por DNI (Binaria) ---\n");
	printf("Ingrese el DNI a buscar: ");
	scanf("%d", &buscar_dni);
	
	int pos = buscar_dni_binaria(amigo, elem, buscar_dni);
	if (pos != -1) {
		printf("\nLa persona %s %s con DNI %d se encuentra en la base de datos (posición %d).\n",
			   amigo[pos].nombre, amigo[pos].apellido, buscar_dni, pos + 1);
	} else {
		printf("\nLa persona con DNI %d NO se encuentra en la base de datos.\n", buscar_dni);
	}
	
	// --- 5) Conteo por edad ---
	int c1 = 0, c2 = 0;
	for (int i = 0; i < elem; i++) {
		if (amigo[i].edad > 20) c1++;
		else                    c2++;
	}
	printf("\nHay %d menores de 20 años (incluidos) y %d mayores de 20 años.\n", c2, c1);
	
	return 0;
}
