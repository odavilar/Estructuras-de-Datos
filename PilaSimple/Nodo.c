#include "Nodo.h"

Nodo* nodo_crearNodo(int x, Nodo* nsig)
{
	Nodo* p;
	p = (Nodo*)malloc(sizeof(Nodo));
	p->dato = x;
	p->sig = nsig;
	return p;
}

Nodo* nodo_crearNodoVacio()
{
	Nodo* p;
	p = (Nodo*)malloc(sizeof(Nodo));
	p->dato = NULL;
	p->sig = NULL;
	return p;
}

Nodo* nodo_crearNodoConDato(int x)
{
	Nodo* p;
	p = (Nodo*)malloc(sizeof(Nodo));
	p->dato = x;
	p->sig = NULL;
	return p;
}
