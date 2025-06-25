#include<stdio.h>
#include<string.h>
#define a "arch2.dat"

int main() {


FILE *arch2;
char nombre[100];

if ((arch2=fopen(a,"w"))==NULL)
		printf("No se pudo abrir el archivo\n");

printf("Ingrese 5 nombres separarados por puntos\n");
scanf("%s", nombre);

fwrite(nombre,strlen(nombre),1,arch2);

fclose(arch2);


return 0;
}

