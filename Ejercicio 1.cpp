#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;

int numeroMayor(int unNumero, int otroNumero);

const int cantidadMaxima = 10;

int main()
{
	int numeros[cantidadMaxima];
	int mayorNumero = 0;

	for (int i = 0; i < cantidadMaxima; i++) {
		cout << "Ingrese un numero: " << endl;
		cin >> numeros[i];
		mayorNumero = numeroMayor(numeros[i], mayorNumero);
	}
	cout << "El mayor numero de tu lista es: " << mayorNumero;
}

int numeroMayor(int unNumero, int otroNumero) {
	if (unNumero > otroNumero) {
		otroNumero = unNumero;
	}
	return otroNumero;
}