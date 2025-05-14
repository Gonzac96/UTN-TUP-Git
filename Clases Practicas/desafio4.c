/*
DESAFIO 4

Crear un programa que permita ingresar los resultados de partidos de fútbol. Se ingresa primero el de local y visitante.
El programa debe permitir ingresar la cantidad de datos que sean necesarios y determinar cual es la probabilidad de que gane el visitante respecto del local.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int resultadoLocal, resultadoVisitante; 
	int contador = 0;
	
	printf("Ingrese las resultados uno por uno (ingrese -1 para finalizar):\n");
	
	bool continuar = true;
	
	int ganaLocal = 0, ganaVisitante = 0, empate = 0;
	
	while (continuar)
	{
		printf("Resultado del local: ");
		scanf("%d", &resultadoLocal);
		printf("Resultado del visitante: ");
		scanf("%d", &resultadoVisitante);
		
		
		if (resultadoLocal == -1 || resultadoVisitante == -1)
		{
			continuar = false;
		}
		else if (resultadoVisitante >= 0 && resultadoLocal >= 0)
		{			
			contador++;
			if (resultadoLocal > resultadoVisitante){
				ganaLocal++;
			} else if(resultadoVisitante > resultadoLocal){
				ganaVisitante++;
			} else{
				empate++;
			}
		} else {
			printf("El resultado ingresado es erroneo. Ingrese nuevamente\n");
		}
	}
	
	if (contador > 0)
	{
		printf("La probabilidad de que gane el equipo local es de %g", (float)(ganaLocal*100)/contador);
		printf("\nLa probabilidad de que gane el equipo visitante es de %g", (float)(ganaVisitante*100)/contador);
		printf("\nLa probabilidad de empate es de %g", (float)(empate*100)/contador);
	}else{
		printf("\nNo se ingresaron partidos.");
	}
	
	return 0;
} 

