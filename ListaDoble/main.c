#include <stdio.h>
#include "ListaDoble.h"

int main(){

ListaDoble* listadoble = listadoble_CrearLista();
Nodo* nodo;

for(int i=0; i<10; i++){
nodo = nodo_crearNodo(i, NULL,NULL);
listadoble_AgregarNodoFinal(listadoble, nodo);
}

nodo = nodo_crearNodo(666, NULL,NULL);

listadoble_AgregarNodoInicio(listadoble,nodo);

listadoble_MostrarDatos(listadoble);

listadoble_BorraNodoInicio(listadoble);

listadoble_BorraNodoUltimo(listadoble);

listadoble_MostrarDatos(listadoble);

listadoble_EliminarLista(listadoble);

return 0;
}
