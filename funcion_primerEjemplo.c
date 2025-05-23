#include <stdio.h>

//Definicion de la funcion suma
int suma(int a, int b){
	int resultado;
	resultado = a + b;
	return printf("\nEl resultado de la suma es %d", resultado);
}

//Definicion de la funcion resta
int resta(int a, int b){
	int resultado;
	resultado = a - b;
	return printf("\nEl resultado de la resta es %d", resultado);
}

	
int main() {
	
	int num1, num2;
	
	printf("Ingrese el primer número: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo número: ");
	scanf("%d", &num2);
	printf("\n");
	
	int opcion;
	printf("Qué operación desea realizar?\n1.Suma\n2.Resta\nIngrese 1 o 2: ");
	scanf("%d", &opcion);
	
	int z;
	if(opcion == 1){
		z = suma(num1, num2);
		return z;
	} else if(opcion == 2){
		z = resta(num1, num2);
		return z;
	} else {
		printf("\nIngresó un número invalido.");
	}
}

