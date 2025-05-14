/*
DESAFIO 3

Escribe un programa en C que permita registrar las calificaciones de estudiantes en una materia, donde el programa:
Pida al usuario ingresar una calificación (un número entero entre 0 y 10) para cada estudiante.
El programa debe dejar de pedir calificaciones cuando el usuario ingrese -1.
Al final, el programa debe mostrar la cantidad de calificaciones ingresadas y el promedio de las calificaciones.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	float calificacion; 
	int suma = 0, contador = 0;
	
	printf("Ingrese las calificaciones una por una (ingrese -1 para finalizar):\n");
	
	bool continuar = true;
	
	while (continuar)
	{
		printf("Calificacion: ");
		scanf("%f", &calificacion);
		
		if (calificacion == -1)
		{
			continuar = false;
		}
		else if ((calificacion >= 0) && (calificacion <= 10))
		{
			// Calculos para el resultado:
			suma += calificacion;
			contador++;
		} else {
			printf("La calificacion ingresada es erronea. Ingrese nuevamente\n");
		}
	}
	
	if (contador > 0)
	{
		float promedio = (float)suma / contador;
		printf("\nLa cantidad de calificaciones ingresadas fue de %d\n", contador);
		printf("Promedio de calificaciones: %.2f\n", promedio);
	}
	
	return 0;
} 
