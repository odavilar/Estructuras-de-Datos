#include <stdlib.h>

typedef struct _Nodo{
	struct Nodo *sig;
	int dato;
}Nodo;

Nodo* nodo_crearNodo(int x, Nodo* nsig);

Nodo* nodo_crearNodoVacio();

Nodo* nodo_crearNodoConDato(int x);
