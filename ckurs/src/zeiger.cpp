/*
 * zeiger.cpp
 *
 *  Created on: 03.09.2020
 *      Author: PD04381
 */

#include <iostream>
using namespace std;

const unsigned int DIM = 10;

int mai45n(){
	unsigned int i; // Variable (int) namens i anlegen, nicht initialisiert
	int x;			// Variable (int) namens x anlegen, nicht initialisiert
	int *px;		// PointerVariable (int*) namens px anlegen, nicht initialisiert
	int arr[DIM];	// Array anlegen, 10 groﬂ, aus ints, nicht initialisiert

	px = &x;		// In Pointer px die Adresse von x speichern
	*px = 20;		// An, in Pointer gespeicherte Adresse, den Wert 20 speichern, also in x

	cout << px << endl << *px << endl << x << endl; //Ausgabe der Adresse des Pointers und des Wertes von x

	px = &arr[0]; px = arr; //beide Befehle identisch: langform - kurzform; Pointer hat Adresse vom 1. Element des Arrays
	*px = 10; arr[0] = 10; px[0] = 10; *arr = 10; //alles identisch; Wertzuweisung aufs 1. Element des Arrays
	*(px+1) = 20; arr[1] = 20; px[1] = 20; *(arr+1) = 20; // alles identisch; Wertzuweisung aufs 2. Element des Arrays

	for(i = 0; i < DIM; i++){ //Speicheradresse vom pointer ‰ndert sich !!nicht!!
		//Adresse und Inhalt aller Speicherpl‰tze des Arrays werden ausgegeben
		px[i] = (i+1)*DIM;
		cout << "Adresse: " << (px+i) << " Inhalt: " << *(px+i) << endl;
	}
	cout << "-----------------" << endl;
	for(i = 0; i < DIM; ++i, ++px){ //Speicheradresse wird nach jedem Schleifendurchlauf um 4 byte erhˆht
		//Adresse und Inhalt aller Speicherpl‰tze des Arrays werden ausgegeben
		cout << "Adresse: " << px << " Inhalt: " << *px << endl;
	}
	px = arr; //wieder auf 1. Adresse zeigen
	cout << ++*++px << endl; //erst wird Pointer um 1 erhˆht, dann auf Inhalt zugreifen, diesen ebenfalls um 1 erhˆhen




	return 0;
}


