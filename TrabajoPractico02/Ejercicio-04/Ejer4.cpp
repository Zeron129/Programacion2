/*
Amichetti Quentrequeo Enzo Lautaro
Trabajo Practico nº 2
Ejercicio 4

La idea es crear una lista con números enteros (pueden existir números repetidos) y una
pila de números enteros desordenados no repetidos.
Los números de la lista y de la pila estarán entre 1 y 100 obligatoriamente.
El programa deberá:
1. Cargar la lista con 20 números al azar.
2. Cargar la pila con 10 números al azar no repetidos.
3. Deberá mostrar toda la lista y la pila luego de cargarlas.
4. Deberá reemplazar el número mayor de la lista con el número menor de la pila. La
pila debe quedar como estaba originalmente.
5. Deberá imprimir el mayor de la lista y el menor de la pila.
6. Deberá imprimir la lista con los cambios pedidos y sin repetidos
7. Deberá imprimir la pila como estaba originalmente.
8. Deberá liberar la memoria utilizada por la lista y la pila si es necesario.
Ejemplo de una salida
La Lista se carga con estos valores:
1, 11, 2, 3, 88, 33, 11, 2, 17, 23, 76, 12, 11, 98, 44, 45, 34, 78, 21, 20
La Pila se carga con estos valores:
32, 4, 5, 7, 22, 55, 9, 22, 77, 99
Mayor de la lista es 98
Menor de la pila es 4
Lista:1, 2, 3, 4, 11, 12, 17, 20, 21, 23, 33, 34, 44, 45, 76, 78, 88
Pila: 32, 4, 5, 7, 22, 55, 9, 22, 77, 99
*/
#include<time.h>
#include"../../libreria-VS2017/Lista.h"
#include"../../libreria-VS2017/ColaD.h"
#include"../../libreria-VS2017/ListaS.h"
#include"../../libreria-VS2017/Nodo.h"
#include"../../libreria-VS2017/PilaD.h"
#define TAMLIS 20
#define TAMPIL 10

int main(void) {
	srand(time(NULL));
	int dato = 0;
	int menor = 99;
	int mayor = 0;
	int veclista[TAMLIS] = { 1, 11, 2, 3, 88, 33, 11, 2, 17, 23, 76, 12, 11, 98, 44, 45, 34, 78, 21, 20 };
	int vecPila[TAMPIL] = { 32, 4, 5, 7, 22, 55, 9, 22, 77, 99 };
	Lista *lista = new Lista();
	Lista *listaAux = new Lista();
	PilaD *pila = new PilaD();
	PilaD *pilaAux = new PilaD();

	for (int i = 0; i < TAMLIS; i++) {
		lista->pushBack(veclista[i]);
		//lista->pushBack(rand() % 100 + 1);
	}
	for (int i = 0; i < TAMPIL; i++) {
		pila->push(vecPila[i]);
		//pila->push(rand() % 100 + 1);
	}

	cout << "Lista :";
	while (lista->popBack(dato)) {
		cout << " " << dato << ",";
		if (mayor < dato) {
			mayor = dato;
		}
		listaAux->pushBack(dato);
	}
	cout << "\nPila :";
	while (!pila->empty()){
		dato = pila->pop();
		cout << " " << dato << ",";
		if (menor > dato) {
			menor = dato;
		}
		pilaAux->push(dato);
	}
	
	listaAux->extract(mayor);
	listaAux->insert(menor);

	while (listaAux->popBack(dato)) {
		lista->pushBack(dato);
	}
	while (!pilaAux->empty()) {
		pila->push(pilaAux->pop());
	}
	cin.get();

	cout << "Mayor de la lista es " << mayor << endl;
	cout << "Menor de la pila es " << menor << endl;
	
	cin.get();

	cout << "Lista :";
	while (lista->popBack(dato)) {
		cout << " " << dato << ",";
	}
	cout << "\nPila :";
	while (!pila->empty()) {
		cout << " " << pila->pop() << ",";
	}
	cin.get();
	delete lista;
	delete listaAux;
	delete pila;
	delete pilaAux;

	system("PAUSE");
	return 0;
}