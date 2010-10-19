#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ListaDoble.h"

ListaDoble* listadoble_CrearLista()
{
	ListaDoble* lista;
	lista = (ListaDoble*)malloc(sizeof(ListaDoble));
	lista->inicio = NULL;
	lista->fin = NULL;
	lista->actual = NULL;
	return lista;
} 

bool listadoble_Vacia(ListaDoble* L)
{
	return (L->inicio == NULL);
}

void listadoble_AgregarNodoFinal(ListaDoble* L, Nodo* nodo)
{
	if(L->inicio == NULL)
		L->inicio = L->fin = L->actual = nodo;
	else{
		Nodo* p;
		p = L->fin;
		p->sig = nodo;
		nodo->ant = p;
		L->actual = nodo;
		L->fin = nodo;
	}
}

void listadoble_AgregarNodoInicio(ListaDoble* L, Nodo* nodo)
{
	if(L->inicio == NULL)
		L->inicio = L->fin = L->actual = nodo;
	else{
		nodo->sig = L->inicio;
		L->inicio->ant = nodo;
		L->inicio = nodo;
	}
}

void listadoble_MostrarDatos(ListaDoble* L)
{
	Nodo* p = L->inicio;
	while(p != NULL){
		printf("%d ",p->dato);
		p=p->sig;
	}
	printf("\n");
}

void listadoble_EliminarLista(ListaDoble* L)
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

void listadoble_BorraNodoUltimo(ListaDoble* L){
	Nodo* p = L->fin;
	Nodo* q = p->ant;
	q->sig = NULL;
	free(p);
}

void listadoble_BorraNodoInicio(ListaDoble* L){
	Nodo *p = L->inicio;
	Nodo *q = p->sig;
	q->ant = NULL;
	L->inicio = p->sig;
	free(p);
}
