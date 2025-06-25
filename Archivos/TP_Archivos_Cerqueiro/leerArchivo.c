#include <stdio.h>

#define ARCHIVO "banco.txt"

int main() {
	FILE *archivo;
	char linea[50];
	
	archivo = fopen(ARCHIVO, "r");
	
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo %s\n", ARCHIVO);
		return 1;
	}
	
	printf("Contenido del archivo %s:\n\n", ARCHIVO);
	
	// Leer línea por línea hasta fin de archivo
	while (fgets(linea, sizeof(linea), archivo) != NULL) {
		printf("%s", linea);
	}
	
	fclose(archivo);
	
	return 0;
}
