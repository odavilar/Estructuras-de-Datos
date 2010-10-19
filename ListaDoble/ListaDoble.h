#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Nodo.h"

typedef struct _ListaDoble{
	Nodo* inicio;
	Nodo* fin;
	Nodo* actual;
}ListaDoble;

ListaDoble* listadoble_CrearLista();

bool listadoble_Vacia(ListaDoble* L);

void listadoble_AgregarNodoFinal(ListaDoble* L, Nodo* nodo);

void listadoble_AgregarNodoInicio(ListaDoble* L, Nodo* nodo);

void listadoble_MostrarDatos(ListaDoble* L);

void listadoble_EliminarLista(ListaDoble* L);

void listadoble_BorraNodoUltimo(ListaDoble* L);

void listadoble_BorraNodoInicio(ListaDoble* L);
