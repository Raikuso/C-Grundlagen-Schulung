/*
 * schulnoten.cpp
 *
 *  Created on: 31.08.2020
 *      Author: pd04381
 */
#include <iostream>
using namespace std;

int main1500(){
	int note = 1;
	cout << "Note: ";
	do {
		cin >> note;
		switch(note){
		case 1: cout << "Sehr gut"; break;
		case 2: cout << "Gut"; break;
		case 3: cout << "Befriedigend"; break;
		case 4: cout << "Ausreichend"; break;
		case 5: cout << "Mangelhaft"; break;
		case 6: cout << "Ungenügend"; break;
		default: cout << "Fehler: Note nicht zwischen 1 und 6" << endl;
				 cout << "Bitte Note erneut eingeben: "; break;
		}
	}while(note > 6 || note < 1);


	return 0;
}



