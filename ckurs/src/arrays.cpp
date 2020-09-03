/*
 * arrays.cpp
 *
 *  Created on: 02.09.2020
 *      Author: pd04381
 */

#include "aufgaben.h"
#include <iostream>
using namespace std;

const unsigned int DIM = 10;


int main1341(){
	int arr[DIM] = {10, 20, 30, 40, 50, 4, 6, 1, 23 };
	unsigned int i = 0;
	int sum;

	//bytesize des arrays anzeigen lassen
	cout << "Arraysize: " << sizeof(arr) << " Byte" << endl;

	//Eingabe der Zahlen im Array;
	//Vergleich mit globaler Konstante
	for(i = 0; i < DIM; ++i){
		arr[i] = (i+1)*7;
	}

	//Ausgabe des Arrays;
	//Vergleich mit sizeof() <- weniger flexibel
	printarray(arr, DIM);

	//Berechnung und Ausgabe der Summe und des Durchschnitts des Arrays
	sum = arraysum(arr, DIM);
	cout << "Summe: " << sum << endl;
	cout << "Durchschnitt: " << arrayavg(arr, DIM) << endl;

	//Suche nach einer Nummer im Array
	cout << "Gesuchte Zahl vorhanden: " << boolalpha << searchvalue(arr, DIM, 21) << endl;

	return 0;
}


