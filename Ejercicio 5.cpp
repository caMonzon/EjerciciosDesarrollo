#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;

int giveAnio(int fechaEntera, int anio);
int giveMes(int fechaEntera, int anio, int mes);
int giveDia(int fechaEntera, int anio, int mes, int dia);

int main() {

	int fechaEntera = 0;
	int anio = 0;
	int mes = 0;
	int dia = 0;

	cout << "Ingrese su fecha con formato YYYYMMDD: ";
	cin >> fechaEntera;

	anio = giveAnio(fechaEntera, anio);
	cout << "El anio de su fecha es: " << anio << endl;

	mes = giveMes(fechaEntera, anio, mes);
	cout << "El mes de su fecha es: " << mes << endl;

	dia = giveDia(fechaEntera, anio, mes, dia);
	cout << "El dia de su fecha es: " << dia;
}

int giveAnio(int fechaEntera, int anio) {
	anio = fechaEntera / 10000;
	return anio;
}

int giveMes(int fechaEntera, int anio, int mes) {
	anio *= 10000;
	mes = fechaEntera - anio;
	mes /= 100;
	return mes;
}

int giveDia(int fechaEntera, int anio, int mes, int dia) {
	anio *= 10000;
	mes *= 100;
	dia = fechaEntera - anio - mes;
	return dia;
}
