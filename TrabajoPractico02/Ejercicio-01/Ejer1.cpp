/*
Amichetti Quentrequeo Enzo Lautaro
Trabajo Practico nº 2
Ejercicio 1

Crear el proyecto Ejercicio-1.
Copiar todos los ejemplos del módulo P2-Unidad2-(uso de pila ,cola y lista) en un solo
archivo ejer-1.cpp y ejecutarlo.
*/
#include"../../libreria-VS2017/Lista.h"
#include"../../libreria-VS2017/ColaD.h"
#include"../../libreria-VS2017/ListaS.h"
#include"../../libreria-VS2017/Nodo.h"
#include"../../libreria-VS2017/PilaD.h"
void main() {
	PilaD *pila = new PilaD();
	pila->push(10);
	pila->push(20);
	pila->push(30);
	while (!pila->empty())
		std::cout << "Elemento:" << pila->pop() << std::endl;
	cin.get();
	ColaD *cola = new ColaD();
	int dato;
	cola->push(10);
	cola->push(20);
	cola->push(30);
	while (!cola->empty()) {
		cola->pop(dato);
		std::cout << "Elemento: " << dato << std::endl;
	}
	cin.get();
	Lista* lis = new Lista();
	lis->pushBack(10);
	lis->pushBack(20);
	lis->pushBack(30);
	while (lis->popBack(dato)){
		std::cout << "Elemento: " << dato << std::endl;
	}
	cin.get();
	lis->pushBack(10);
	lis->pushBack(20);
	lis->pushBack(30);
	while (lis->popFront(dato)) {
		std::cout << "Elemento: " << dato << std::endl;
	}
	std::cout << std::endl;
	delete pila;
	delete cola;
	delete lis;
	cin.get();
}