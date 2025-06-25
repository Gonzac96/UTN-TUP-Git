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

void insertarAlFinal(struct Nodo** cabeza, int valor)
{
	struct Nodo* nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo)); // Creamos el nuevo nodo
	nuevoNodo->dato = valor;                                             // Asignamos el valor
	nuevoNodo->siguiente = NULL;                                         // Como será el último, su siguiente es NULL
	if (*cabeza == NULL)
	{
		// Si la lista está vacía, el nuevo nodo es la cabeza
		*cabeza = nuevoNodo;
		return;
	}
	
	// Si la lista no está vacía, buscamos el último nodo
	struct Nodo* temp = *cabeza;
	while (temp->siguiente != NULL)
	{
		temp = temp->siguiente; // Avanzamos al siguiente nodo
	}
	temp->siguiente = nuevoNodo; // Enlazamos el último nodo con el nuevo
}

void eliminarNodo(struct Nodo **cabeza, int valor)
{
	struct Nodo *temp = *cabeza;
	struct Nodo *anterior = NULL;
	while (temp != NULL && temp->dato != valor) 
	{
		anterior = temp;
		temp = temp->siguiente;
	}
	if (temp == NULL)
		return; // Si no lo encontramos, salimos
	
	if (anterior == NULL)
	{
		// El nodo a eliminar es el primero
		*cabeza = temp->siguiente;
	}
	else
	{
		// Saltamos el nodo a eliminar
		anterior->siguiente = temp->siguiente;
	}
	
	free(temp); // Liberamos la memoria del nodo eliminado
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
	
	char c = 's', inicio = 'i';
	int elem;
	
	while(c == 's'){
		
		printf("Para agregar un elemento al inicio (i),\nAgregar un elemento al final (f),\nEliminar un valor (e),\nMostrar Nodo (m)\n");
		scanf(" %c", &inicio);
		
		if(inicio == 'i'){
			printf("Ingrese el elemento al inicio: ");
			scanf("%d", &elem);
			insertarAlInicio(&lista, elem);
		}
		else if (inicio == 'f'){
			printf("Ingrese el elemento al final: ");
			scanf("%d", &elem);
			insertarAlFinal(&lista, elem);
		}
		else if (inicio == 'e'){
			printf("Ingrese el elemento a borrar: ");
			scanf("%d", &elem);
			eliminarNodo(&lista, elem);
			
		}
		else if (inicio == 'm'){							//ponerlo por fuera
			printf("Lista enlazada hasta el momento: ");
			mostrarLista(lista);
			continue;
		}
		else {
			printf("Error, ingrese una opción válida.\n");
			continue; //Vuelve al inicio del bucle
		}

		
		printf("Desea ingresar otro elemento? (s/n): ");
		scanf(" %c", &c);
	}
	
	printf("Lista enlazada final: ");
	mostrarLista(lista);
	
	return 0;
}
