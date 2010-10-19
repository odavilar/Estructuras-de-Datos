#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ListaSimple.h"

ListaSimple* listasimple_CrearLista()
{
	ListaSimple* lista;
	lista = (ListaSimple*)malloc(sizeof(ListaSimple));
	lista->inicio = NULL;
	return lista;
} 

bool listasimple_Vacia(ListaSimple* L)
{
	return (L->inicio == NULL);
}

void listasimple_AgregarNodoFinal(ListaSimple* L, Nodo* nodo)
{
	if(L->inicio == NULL)
		L->inicio = nodo;
	else{
		Nodo* p;
		p = L->inicio;
		while(p->sig != NULL){
			p = p->sig;
		}
		p->sig = nodo;
	}
}

void listasimple_AgregarNodoInicio(ListaSimple* L, Nodo* nodo)
{
	if(L->inicio == NULL)
		L->inicio = nodo;
	else{
		nodo->sig = L->inicio;
		L->inicio = nodo;
	}
}

void listasimple_MostrarDatos(ListaSimple* L)
{
	Nodo* p = L->inicio;
	while(p != NULL){
		printf("%d ",p->dato);
		p=p->sig;
	}
	printf("\n");
}

void listasimple_EliminarLista(ListaSimple* L)
{
	Nodo* p = L->inicio;
	Nodo* temp;
	while(p != NULL){
		temp = p;
		p = p->sig;
		free(temp);
	}
	free(L);
}

void listasimple_BorraNodoUltimo(ListaSimple* L){
	Nodo* p = L->inicio;
	Nodo* q = p;
	while( p->sig != NULL){
		q = p;
		p = p->sig;
	}
	q->sig = NULL;
	free(p);
}

void listasimple_BorraNodoInicio(ListaSimple* L){
	Nodo *p = L->inicio;
	L->inicio = p->sig;
	free(p);
}
