/*
POKER GAME

Haga un programa que permita emular un juego de poker de alta-baja.
El usuario debe adivinar el valor de una carta diciendo si es alta o baja y 
debe acertar si el valor de la carta es inferior a 7 (baja) o superior a 7 (alta).
Si sale 7, pierde.
- Al finalizar el juego debe mostrar la carta que salió. 
- El juego sigue mientras el usuario acierta la carta ganadora. 
- Al perder se muestra la cantidad de puntos que van aumentando en dobles, es decir, inicia en uno, luego 2, luego 4, luego 8.
- Las cartas de poker van de la A a la J,Q,K.(Para este caso, usar solo numeros) ---> desde el 1 al 13.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int carta;
	int sistemaPuntuacion = 0;
	char altaObaja;
	
	// Inicializa el generador de números aleatorios con la hora actual
	srand(time(NULL));
	
	printf("Elija a continuación entre carta alta (A) o baja (B)\n");
	
	do
	{
		altaObaja = ' ';
		carta = (rand() % 13) + 1;
		
		printf("A o B ---> ");
		scanf(" %c", &altaObaja);
		
		if (altaObaja == 'B' && (carta >= 1 && carta <= 6))
		{
			printf("La carta es baja (%d), felicitaciones\n", carta);
			sistemaPuntuacion++;
		}
		else if (altaObaja == 'A' && (carta >= 8 && carta <= 13))
		{
			printf("La carta es alta (%d), felicitaciones\n", carta);
			sistemaPuntuacion++;
		} 
		else if (carta == 7)
		{
			printf("La carta es %d, PERDISTE\n\n", carta);
		} 
		else 
		{
			printf("La carta es %d, PERDISTE\n\n", carta);
			break;
		}
	} while (carta != 7);
	
	if (sistemaPuntuacion == 0){
		printf("No obtuviste niguna victoria.");
	} else if (sistemaPuntuacion == 1){
		printf("Ganaste 1 vez.");
	} else {
		printf("Ganaste %d veces.", sistemaPuntuacion);
	}
	
	return 0;
} 
