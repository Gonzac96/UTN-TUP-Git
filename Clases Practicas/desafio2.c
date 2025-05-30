/*
DESAFIO 2

Escribe un programa en C que permita registrar las edades de varias personas y luego muestre el promedio de edad, la edad m�s peque�a y la m�s alta.

El programa debe solicitar al usuario que ingrese edades una por una.
Si la edad ingresada es menor a 0, se debe mostrar un mensaje de error y pedir nuevamente una edad v�lida.
Si el usuario ingresa 0, el programa debe finalizar y mostrar:
El promedio de las edades ingresadas.
La edad m�s peque�a.
La edad m�s alta.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int edad, suma = 0, contador = 0;
	
	int edad_min = 2147483647;  // Valor inicial alto para encontrar el m�nimo
	int edad_max = -2147483648; // Valor inicial bajo para encontrar el m�ximo
	
	printf("Ingrese las edades una por una (ingrese 0 para finalizar):\n");
	
	bool continuar = true;
	
	while (continuar)
	{
		printf("Edad: ");
		scanf("%d", &edad);
		
		if (edad < 0)
		{
			printf("Error: La edad no puede ser negativa. Intente nuevamente.\n");
		}
		else if (edad == 0)
		{
			continuar = false;
		}
		else
		{
			// Calculos para el resultado:
			suma += edad;
			contador++;
			
			if (edad < edad_min)
			{
				edad_min = edad;
			}
			
			if (edad > edad_max)
			{
				edad_max = edad;
			}
		}
	}
	
	if (contador > 0)
	{
		float promedio = (float)suma / contador;
		printf("\nResultados:\n");
		printf("Promedio de edades: %.2f\n", promedio);
		printf("Edad m�s peque�a: %d\n", edad_min);
		printf("Edad m�s alta: %d\n", edad_max);
	}
	
	return 0;
}
