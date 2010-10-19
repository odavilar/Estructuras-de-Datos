#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Nodo.h"

typedef struct _ListaSimple{
	Nodo* inicio;
}ListaSimple;

ListaSimple* listasimple_CrearLista();

bool listasimple_Vacia(ListaSimple* L);

void listasimple_AgregarNodoFinal(ListaSimple* L, Nodo* nodo);

void listasimple_AgregarNodoInicio(ListaSimple* L, Nodo* nodo);

void listasimple_MostrarDatos(ListaSimple* L);

void listasimple_EliminarLista(ListaSimple* L);

void listasimple_BorraNodoUltimo(ListaSimple* L);

void listasimple_BorraNodoInicio(ListaSimple* L);
