#include <stdio.h>
#include "ListaSimple.h"

int main(){

ListaSimple* listasimple = listasimple_CrearLista();
Nodo* nodo;

for(int i=0; i<10; i++){
nodo = nodo_crearNodo(i, NULL);
listasimple_AgregarNodoFinal(listasimple, nodo);
}

nodo = nodo_crearNodo(666, NULL);

listasimple_AgregarNodoInicio(listasimple,nodo);

listasimple_MostrarDatos(listasimple);

listasimple_BorraNodoInicio(listasimple);

listasimple_BorraNodoUltimo(listasimple);

listasimple_MostrarDatos(listasimple);

listasimple_EliminarLista(listasimple);

return 0;
}
