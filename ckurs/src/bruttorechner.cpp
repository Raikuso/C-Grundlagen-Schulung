/*#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

//initialisierung der Funktionen
float BerLohnstr(float brutto);
float BerKirchenstr(float brutto);
float BerKrankenvers(float brutto);
float BerPflegevers(float brutto);
float BerRentenvers(float brutto);
float BerArbeitslosenvers(float brutto);
float BerSozialvers_ges(float brutto);



int main7(){
	float brutto;

	//eingabe
	cout << "Geben Sie Ihren Bruttolohn ein: ";
	cin >> brutto;
	system("CLS");

	//Ausgabe mit Aufruf von Funktionen
	cout << "Ensprechend den oben gemachten Eingaben ergibt sich die\nGehaltsabrechnung wie folgt:" << endl;
	cout << "\n" << endl;
	cout << left << setw(5) << " " << setw(80) << "Gesamtgehalt Brutto:" << setw(7) << brutto << " EUR" << endl;
	cout << "\n" << endl;
	cout << left << setw(5) << " " << setw(80) << "Steuerrechtliche Abzüge:" << endl;
	cout << left << setw(5) << " " << setw(80) << "Lohnsteuer:" << setw(7) << BerLohnstr(brutto) << " EUR" << endl;
	cout << left << setw(5) << " " << setw(80) << "Kirchensteuer:" << setw(7) << BerKirchenstr(brutto) << " EUR" << endl;
	cout << left << setw(5) << " " << setw(80) << "steuerrechtliche Abzuege (gesamt):" << setw(7) << BerLohnstr(brutto) + BerKirchenstr(brutto) << " EUR" << endl;

	cout << "\n" << endl;

	cout << left << setw(5) << " " << setw(80) << "Sozialversicherungsrechtliche Abzuege" << endl;
	cout << left << setw(5) << " " << setw(80) << "KrankenVersicherung:" << setw(7) << BerKrankenvers(brutto) << " EUR" << endl;
	cout << left << setw(5) << " " << setw(80) << "Pflegeversicherung:" << setw(7) << BerPflegevers(brutto) << " EUR" << endl;
	cout << left << setw(5) << " " << setw(80) << "Rentenversicherung:" << setw(7) << BerRentenvers(brutto) << " EUR" << endl;
	cout << left << setw(5) << " " << setw(80) << "Arbeitslosenversicherung:" << setw(7) << BerArbeitslosenvers(brutto) << " EUR" << endl;
	cout << left << setw(5) << " " << setw(80) << "Sozialversicherungsrechtliche Abzuege (gesamt):" << setw(7) << BerSozialvers_ges(brutto) << " EUR" << endl << endl;
	cout << left << setw(5) << " " << setw(80) << "Netto Verdienst:" << setw(7) << brutto - BerSozialvers_ges(brutto) - BerLohnstr(brutto) - BerKirchenstr(brutto) << " EUR" << endl << endl;

	return 0;
}


//deklaration der Funktionen
float BerLohnstr(float brutto){
	float lohnstr = 0.25;
	return brutto*lohnstr;
}

float BerKirchenstr(float brutto){
	float kirchstr = 0.09;
	return BerLohnstr(brutto)*kirchstr;
}

float BerKrankenvers(float brutto){
	float krankenvers = 0.146;
	return brutto * krankenvers * 0.5;
}

float BerPflegevers(float brutto){
	float pflegevers = 0.033;
	return brutto * pflegevers * 0.5;
}

float BerRentenvers(float brutto){
	float rentenvers = 0.186;
	return brutto * rentenvers * 0.5;
}

float BerArbeitslosenvers(float brutto){
	float arbeitslosenvers = 0.024;
	return brutto * arbeitslosenvers * 0.5;
}

float BerSozialvers_ges(float brutto){
	return BerRentenvers(brutto) + BerArbeitslosenvers(brutto) + BerPflegevers(brutto) + BerKrankenvers(brutto);
}

*/
