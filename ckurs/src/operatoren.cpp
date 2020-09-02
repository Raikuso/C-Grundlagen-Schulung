/*
 * operatoren.cpp
 *
 *  Created on: 31.08.2020
 *      Author: pd04381 <- that's me 8)
 */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main2(){
	//initialisierung und deklaration der variablen
	double radius = 5.3;
	const double PI = 3.14159;
	double erg;

	//eingabe des Radiuses
	cout << "Radius: ";
	cin >> radius;

	//Berechnung und Ausgabe der Rechenergebnisse
	erg = 2. * PI * radius;
	cout << "Umfang des Kreises:\t" << erg << endl;
	erg = PI * pow(radius, 2.);
	cout << "Kreisfläche:\t\t" << erg << endl;


return 0;
}


