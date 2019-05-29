#include "pch.h"
#include <iostream>
#include <sstream>
#include <math.h>
using namespace std;

bool primo(int unNumero);      

int main() {
	int  numero = 0;
	cout << "Ingrese un numero para determinar si es primo o no: ";
	cin >> numero;

	if (primo(numero))         
		cout << numero << " es un numero primo" << endl;
	else
		cout << numero << " no es un numero primo" << endl;
}

bool primo(int unNumero) {
	if (unNumero == 1 || unNumero == 2)
		return true;
	for (int i = 2; i < unNumero / 2; i++) {
		if (unNumero%i == 0)
			return false;
	}
	return true;
}