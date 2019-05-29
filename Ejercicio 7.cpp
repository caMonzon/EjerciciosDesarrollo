#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;

int unificarFecha(int anio, int mes, int dia, int fechaEntera);

int main() {
	int anio = 0;
	int mes = 0;
	int dia = 0;
	int fechaEntera = 0;

	cout << "Ingrese el anio de su fecha: " << endl;
	cin >> anio;
	cout << "Ingrese el mes de su fecha: " << endl;
	cin >> mes;
	cout << "Ingrese el dia de su fecha: " << endl;
	cin >> dia;

	fechaEntera = unificarFecha(anio, mes, dia, fechaEntera);
	cout << "Su fecha entera es: " << fechaEntera;
}

int unificarFecha(int anio, int mes, int dia, int fechaEntera) {
	anio *= 10000;
	mes *= 100;
	fechaEntera = anio + mes + dia;
	return fechaEntera;
}