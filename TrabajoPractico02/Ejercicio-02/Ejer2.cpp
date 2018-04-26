/*
Amichetti Quentrequeo Enzo Lautaro
Trabajo Practico nº 2
Ejercicio 2

 Cargar una pila con 10 números enteros ascendentes y mostrarlos por pantalla.
 Cargar una cola con 10 números enteros ascendentes y mostrarlos por pantalla.
 Cargar una lista con 10 números enteros ascendentes y mostrarlos por pantalla.
Todos los contenedores quedaran vacíos.
*/
#include"../../libreria-VS2017/Lista.h"
#include"../../libreria-VS2017/ColaD.h"
#include"../../libreria-VS2017/ListaS.h"
#include"../../libreria-VS2017/Nodo.h"
#include"../../libreria-VS2017/PilaD.h"
int main(void) {
	int dato = 0;

	PilaD *pila = new PilaD();
	for (int i = 1; i <= 10; i++) {
		pila->push(i);
	}
	while (!pila->empty())
		std::cout << "Elemento:" << pila->pop() << std::endl;
	cin.get();

	ColaD *cola = new ColaD();
	
	for (int i = 1; i <= 10; i++) {
		cola->push(i*10);
	}
	while (!cola->empty()) {
		cola->pop(dato);
		std::cout << "Elemento: " << dato << std::endl;
	}
	cin.get();
	
	Lista *lista = new Lista();

	for (int i = 1; i <= 10; i++) {
		lista->pushBack(i + 100);
	}
	while (lista->popFront(dato)) {
		std::cout << "Elemento: " << dato << std::endl;
	}

	delete pila;
	delete cola;
	delete lista;

	system("PAUSE");
	return 0;
}