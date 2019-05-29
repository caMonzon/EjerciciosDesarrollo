#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;

string multiplos(int primerNumero, int segundoNumero, string multiploOno);

int main() {
	int primerNumero = 0;
	int segundoNumero = 0;
	string multiploOno;

	cout << "Ingrese el primer numero: " << endl;
	cin >> primerNumero;
	cout << "Ingrese el segundo numero: " << endl;
	cin >> segundoNumero;

	multiploOno = multiplos(primerNumero, segundoNumero, multiploOno);
	cout << multiploOno;

}

string multiplos(int primerNumero, int segundoNumero, string multiploOno) {
	if (primerNumero % segundoNumero == 0 || segundoNumero % primerNumero == 0) {
		multiploOno = "Sus numero son multiplos";
	}
	else {
		multiploOno = "Sus numeros no son multiplos";
	}
	return multiploOno;
}