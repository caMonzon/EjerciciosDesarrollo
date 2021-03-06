#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;

const int cantidadMaxima = 50;

int acumuladorMayores100(int unNumero, int otroNumero, int acumulador);
int contadorMayores100(int unNumero, int otroNumero, int contador);
int sumaDeMenores(int unNumero, int otroNumero, int acumulador);

int main()
{
	int numero[cantidadMaxima];
	int acumulador = 0;
	int contadorMayoresA100 = 0;
	int sumaMenores = 0;
	int promedio = 0;

	for (int i = 0; i < cantidadMaxima; i++) {
		cout << "Ingrese un numero: ";
		cin >> numero[i];
		acumulador = acumuladorMayores100(numero[i], 100, acumulador);
		contadorMayoresA100 = contadorMayores100(numero[i], 100, contadorMayoresA100);
		sumaMenores = sumaDeMenores(numero[i], -10, sumaMenores);
	}

	promedio = acumulador / contadorMayoresA100;
	cout << "El promedio de los numeros mayores a 100 es: " << promedio << endl;
	cout << "La suma de los numero menores a -10 es: " << sumaMenores;
}

int acumuladorMayores100(int unNumero, int otroNumero, int acumulador) {
	if (unNumero > otroNumero) {
		acumulador += unNumero;
	}
	return acumulador;
}

int contadorMayores100(int unNumero, int otroNumero, int contador) {
	if (unNumero > otroNumero) {
		contador++;
	}
	return contador;
}

int sumaDeMenores(int unNumero, int otroNumero, int acumulador) {
	if (unNumero < otroNumero) {
		acumulador += unNumero;
	}
	return acumulador;
}