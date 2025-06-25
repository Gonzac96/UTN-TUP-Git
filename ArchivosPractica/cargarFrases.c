//Ver como hacer para poder cargar mas de una palabra. Al detectar el espacio no me toma ningun otro caracter
//SOLUCION: utilizar fgets en vez de scanf.

#include <stdio.h>

int main() {
	
	FILE *texto;
	char frases[200];
	
	texto = fopen("texto.txt", "w");
	
	// Verificar si el archivo se abri� correctamente
	if (texto == NULL) {
		printf("Error al abrir el archivo.\n");
		return 1; // Salir con c�digo de error
	}
	
	printf("Ingrese la oraci�n que desee\n\n");

	// Usar fgets para leer una l�nea completa (con espacios)
	fgets(frases, sizeof(frases), stdin);
	
	fprintf(texto, "%s", frases);
	
	fclose(texto);
	
	return 0;
}


