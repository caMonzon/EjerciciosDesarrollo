#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;

int giveAnio(int fechaEntera, int anio);
int giveMes(int fechaEntera, int anio, int mes);
int giveDia(int fechaEntera, int anio, int mes, int dia);
string fechaMasReciente(int anio, int anio2, int mes, int mes2, int dia, int dia2, string fechaReciente);

int main() {

	int fechaEntera = 0;
	int anio = 0;
	int mes = 0;
	int dia = 0;
	int fechaEntera2 = 0;
	int anio2 = 0;
	int mes2 = 0;
	int dia2 = 0;
	string fechaReciente;

	cout << "Ingrese la primer fecha con formato YYYYMMDD: ";
	cin >> fechaEntera;
	cout << "Ingrese la segunda fecha con formato YYYYMMDD: ";
	cin >> fechaEntera2;

	anio = giveAnio(fechaEntera, anio);
	mes = giveMes(fechaEntera, anio, mes);
	dia = giveDia(fechaEntera, anio, mes, dia);

	anio2 = giveAnio(fechaEntera2, anio2);
	mes2 = giveMes(fechaEntera2, anio2, mes2);
	dia2 = giveDia(fechaEntera2, anio2, mes2, dia2);

	fechaReciente = fechaMasReciente(anio, anio2, mes, mes2, dia, dia2, fechaReciente);
	cout << fechaReciente;

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

string fechaMasReciente(int anio, int anio2, int mes, int mes2, int dia, int dia2, string fechaReciente) {
	if (anio > anio2) {
		fechaReciente = "La primer fecha es mas reciente";
	}
	else if (anio2 > anio) {
		fechaReciente = "La segunda fecha es mas reciente";
	}
	else if (mes > mes2) {
		fechaReciente = "La primer fecha es mas reciente";
	}
	else if (mes2 > mes) {
		fechaReciente = "La segunda fecha es mas reciente";
	}
	else if (dia > dia2) {
		fechaReciente = "La primer fecha es mas reciente";
	}
	else if (dia2 < dia) {
		fechaReciente = "La segunda fecha es mas reciente";
	}
	else
	{
		fechaReciente = "Las fechas son exactamente iguales";
	}
	return fechaReciente;
}