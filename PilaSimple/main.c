#include <stdio.h>
#include "PilaSimple.h"

int main(){

PilaSimple* pilasimple = pilasimple_CrearPila();
Nodo* nodo;
if(pilasimple_Vacia(pilasimple))
	printf("vacia\n");

nodo = nodo_crearNodo(5, NULL);
pilasimple_Meter(pilasimple, nodo);

printf("mm\n");

if(pilasimple_Vacia(pilasimple))
	printf("vacia\n");

for(int i=0; i<10; i++){
nodo = nodo_crearNodo(i, NULL);
pilasimple_Meter(pilasimple, nodo);
printf("%d\n",pilasimple_MostrarDato(pilasimple));
}

printf("done\n");
pilasimple_EliminarPila(pilasimple);
printf("%d\n",pilasimple_MostrarDato(pilasimple));
printf("done\n");
return 0;
}
