#include "pch.h"
#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

int potenciar(int base, int exponente, int potencia);

int main() {
	int base = 0;
	int exponente = 0;
	int potencia = 0;

	cout << "Ingrese la base de su potencia: " << endl;
	cin >> base;
	cout << "Ingrese el exponente de su potencia: " << endl;
	cin >> exponente;

	potencia = potenciar(base, exponente, potencia);
	cout << "La potencia es: " << potencia;
}

int potenciar(int base, int exponente, int potencia) {
	potencia = pow(base, exponente);
	return potencia;
}
