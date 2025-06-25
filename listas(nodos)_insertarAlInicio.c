#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
struct Nodo {
	int dato;
	struct Nodo* siguiente;
};

// Función para agregar un nodo al inicio
void insertarAlInicio(struct Nodo** cabeza, int valor) {
	struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
	nuevoNodo->dato = valor;
	nuevoNodo->siguiente = *cabeza;
	*cabeza = nuevoNodo;
}

// Función para mostrar la lista
void mostrarLista(struct Nodo* nodo) {
	while (nodo != NULL) {
		printf("%d -> ", nodo->dato);
		nodo = nodo->siguiente;
	}
	printf("NULL\n");
}

int main() {
	struct Nodo* lista = NULL;
	
	char c = 's';
	int elem;
	
	while(c == 's'){
		printf("Ingrese un nuevo elemento: ");
		scanf("%d", &elem);
		insertarAlInicio(&lista, elem);
		
		printf("Desea ingresar otro elemento? (s/n): ");
		scanf(" %c", &c);
	}
	
	printf("Lista enlazada: ");
	mostrarLista(lista);
	
	return 0;
}


