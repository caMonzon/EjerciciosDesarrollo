#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;

int main() {

	int cantidadMultiplos = 0;
	int resultado = 0;
	int multiplicador = 0;
	int numeroDeLaTabla = 0;
	int numeroDivision = 0;

	cout << "Ingrese la cantidad de multiplos que quiere: ";
	cin >> cantidadMultiplos;
	cout << "Ingrese de que numero quiere la tabla: ";
	cin >> numeroDeLaTabla;
	cout << "Ingrese por que numero no se deben dividir los multiplos: ";
	cin >> numeroDivision;

	for (int i = 0; i < cantidadMultiplos; i++) {

		resultado = numeroDeLaTabla * multiplicador;
		multiplicador++;

		if (resultado % numeroDivision != 0) {
			cout << "La multiplicacion es: " << resultado << endl;
		}
		else
		{
			i--;
		}
	}
}