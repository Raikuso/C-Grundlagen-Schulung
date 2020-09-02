/*
 * nettobrutto.cpp
 *
 *  Created on: 01.09.2020
 *      Author: pd04381
 */
#include "aufgaben.h"
#include <iostream>
using namespace std;

int main9876(){
	double netto= 0., mwst = 19., erg;
		cout << "Netto : ";
		cin >> netto;
		cout << "Mwst.: ";
		cin >> mwst;
		erg = brutto(netto, mwst);
		cout << "Brutto: " << erg << endl;

		return 0;
}



