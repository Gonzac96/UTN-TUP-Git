/* 
Calcular las raices reales de una ecuacion cuadratica
*/
#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	float discriminante, x1, x2;
	
	printf("Ingrese los coeficientes a, b y c:\n");
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	
	if (a == 0) {
		printf("No es una ecuaci�n cuadr�tica (a no puede ser 0).\n");
		return 1;
	}
	
	discriminante = b * b - 4 * a * c;
	
	if (discriminante > 0) {
		x1 = (-b + sqrt(discriminante)) / (2 * a);
		x2 = (-b - sqrt(discriminante)) / (2 * a);
		printf("Ra�ces reales y distintas: x1 = %.2f, x2 = %.2f\n", x1, x2);
	}
	else if (discriminante == 0) {
		x1 = -b / (2 * a);
		printf("Ra�z real y �nica: x = %.2f\n", x1);
	}
	else {
		printf("No existen ra�ces reales.\n");
	}
	
	return 0;
}
