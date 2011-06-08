#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Nodo.h"

typedef struct _PilaSimple{
	Nodo* inicio;
}PilaSimple;

PilaSimple* pilasimple_CrearPila();

bool pilasimple_Vacia(PilaSimple* P);

void pilasimple_AgregarNodoFinal(PilaSimple* P, Nodo* nodo);

void pilasimple_AgregarNodoInicio(PilaSimple* P, Nodo* nodo);

int pilasimple_MostrarDato(PilaSimple* P);

void pilasimple_EliminarPila(PilaSimple* P);

void pilasimple_BorraNodoUltimo(PilaSimple* P);

void pilasimple_BorraNodoInicio(PilaSimple* P);

void pilasimple_Meter(PilaSimple* P, Nodo* nodo);

void pilasimple_Sacar(PilaSimple* P);

