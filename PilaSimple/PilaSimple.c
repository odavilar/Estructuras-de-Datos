#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "PilaSimple.h"

PilaSimple* pilasimple_CrearPila()
{
	PilaSimple* pila;
	pila = (PilaSimple*)malloc(sizeof(PilaSimple));
	pila->inicio = NULL;
	return pila;
} 

bool pilasimple_Vacia(PilaSimple* P)
{
	if(P->inicio == NULL)
		return true;
	else{
		Nodo *p = P->inicio;
		return (p->sig == NULL);
	}
}

void pilasimple_AgregarNodoInicio(PilaSimple* P, Nodo* nodo)
{
	if(P->inicio == NULL)
		P->inicio = nodo;
	else{
		nodo->sig = P->inicio;
		P->inicio = nodo;
	}
}

int pilasimple_MostrarDato(PilaSimple* P)
{
	Nodo *p = P->inicio;
	return p->dato;
}

void pilasimple_EliminarPila(PilaSimple* P)
{
	while(!pilasimple_Vacia(P)){
		printf("%d\n",pilasimple_MostrarDato(P));
		pilasimple_BorraNodoInicio(P);
	}
}

void pilasimple_BorraNodoInicio(PilaSimple* P){
	Nodo *p = P->inicio;
	P->inicio = p->sig;
	free(p);
}

void pilasimple_Meter(PilaSimple* P, Nodo* nodo){
	pilasimple_AgregarNodoInicio(P, nodo);
}

void pilasimple_Sacar(PilaSimple* P){
	pilasimple_BorraNodoInicio(P);
}

