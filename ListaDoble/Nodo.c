#include "Nodo.h"

Nodo* nodo_crearNodo(int x, Nodo* nsig, Nodo* nant)
{
	Nodo* p;
	p = (Nodo*)malloc(sizeof(Nodo));
	p->dato = x;
	p->sig = nsig;
	p->ant = nant;
	return p;
}

Nodo* nodo_crearNodoVacio()
{
	Nodo* p;
	p = (Nodo*)malloc(sizeof(Nodo));
	p->dato = NULL;
	p->sig = NULL;
	p->ant = NULL;
	return p;
}

Nodo* nodo_crearNodoConDato(int x)
{
	Nodo* p;
	p = (Nodo*)malloc(sizeof(Nodo));
	p->dato = x;
	p->sig = NULL;
	p->ant = NULL;
	return p;
}
