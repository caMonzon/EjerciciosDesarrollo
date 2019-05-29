#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;

int valorMaximo(int unNumero, int otroNumero);
int posicionValorMaximo(int valorAnterior, int maximo, int posicion, int index);

int main() {
	int numero[10000];
	int maximo = 0;
	int i = 0;
	int valorAnterior = 0;
	int posicion = 0;

	do {
		cout << "Ingrese un numero: ";
		cin >> numero[i];

		valorAnterior = maximo;

		maximo = valorMaximo(numero[i], maximo);

		posicion = posicionValorMaximo(valorAnterior, maximo, posicion, i);

		i++;

	} while (numero[i - 1] >= 0);

	cout << "El valor maximo de tu lista de numeros es " << maximo << " " << "y su posicion es " << posicion;

}

int valorMaximo(int unNumero, int otroNumero) {
	if (unNumero > otroNumero) {
		otroNumero = unNumero;
	}
	return otroNumero;
}

int posicionValorMaximo(int valorAnterior, int maximo, int posicion, int index) {
	if (valorAnterior != maximo) {
		posicion = index;
	}
	return posicion;
}