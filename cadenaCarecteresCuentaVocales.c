#include <stdio.h>
#include <string.h>

int main()
{   
	int contador;
	contador = 0;
	char cadena[50];
	printf("Ingrese una cadena de caracteres : ");
	fgets(cadena, sizeof(cadena), stdin);
	
	for (int i = 0; i < strlen(cadena); i++)
	{
		if(cadena[i] == 'a' || cadena[i] == 'A' || cadena[i] == 'e' || cadena[i] == 'E' || cadena[i] == 'i' || cadena[i] == 'I' || cadena[i] == 'o' || cadena[i] == 'O' || cadena[i] == 'u' || cadena[i] == 'U') {
			contador++;
		}
	}
	
	// Eliminar el salto de línea
	cadena[strcspn(cadena, "\n")] = '\0';
	
	printf("La palabra '%s' tiene %d vocal(es).\n", cadena, contador);
	
	return 0;
}
