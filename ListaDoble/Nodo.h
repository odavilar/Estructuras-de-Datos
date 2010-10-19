#include <stdlib.h>

typedef struct _Nodo{
	struct Nodo *sig;
	struct Nodo *ant;
	int dato;
}Nodo;

Nodo* nodo_crearNodo(int x, Nodo* nsig, Nodo* nant);

Nodo* nodo_crearNodoVacio();

Nodo* nodo_crearNodoConDato(int x);
