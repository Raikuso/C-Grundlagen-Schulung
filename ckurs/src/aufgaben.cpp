/*
 * aufgaben.cpp
 *
 *  Created on: 01.09.2020
 *      Author: pd04381
 */
#include <iostream>
#include "aufgaben.h"
using namespace std;

int main21321(){
	double zahl1 = 2, zahl2 = 4, erg;
	cin >> zahl1 >> zahl2;

	erg = mymin(zahl1, zahl2);
	cout << "Min: " << erg << endl;
	erg = mymax(zahl1, zahl2);
	cout << "Max: " << erg << endl;
	erg = mittel(zahl1, zahl2);
	cout << "Mittel: " << erg << endl;
	cout << mypow(zahl1, zahl2) << endl;

	return 0;
}



