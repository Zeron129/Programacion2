/*
Amichetti Quentrequeo Enzo Lautaro
Trabajo Practico nº 2
Ejercicio 3

Crear el proyecto Ejercicio-3.
 Crear una lista la cual deberá cargarse con 25 números enteros generados al azar.
 Leer toda la lista, mostrar todos sus números y cargarla en otra lista en orden inverso.
 Muestre la 2º lista por pantalla, los números deberán aparecer en orden inverso al
existente en la primera.
*/
#include<time.h>
#include"../../libreria-VS2017/Lista.h"
#include"../../libreria-VS2017/ColaD.h"
#include"../../libreria-VS2017/ListaS.h"
#include"../../libreria-VS2017/Nodo.h"
#include"../../libreria-VS2017/PilaD.h"

int main(void) {
	srand(time(NULL));
	Lista *lista1 = new Lista();
	Lista *lista2 = new Lista();
	int dato = 0;

	for (int i = 0; i < 25; i++) {
		lista1->pushFront(rand() % 100 + 1);
	}
	cout << "Lista 1 :";
	while(lista1->popBack(dato)){
		cout <<" " << dato <<",";
		lista2->pushBack(dato);
	}
	cout << "\nLista 2 :";
	while (lista2->popBack(dato)) {
		cout << " " << dato << ",";
	}
	cout << "\n";

	delete lista1;
	delete lista2;

	system("PAUSE");
	return 0;
}