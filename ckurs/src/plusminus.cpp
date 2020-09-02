/*
 * plusminus.cpp
 *
 *  Created on: 31.08.2020
 *      Author: pd04381
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cmath>
using namespace std;

const int MAX = 1000;
const double KORN_GEWICHT = 0.01/1000000; //Gewicht in Tonnen

int main565(){
	unsigned long long sum = 0L, korn = 1L;

	//so wie der Lehrer es wollte
	for(int i = 0; i <= MAX; sum += i++);
	cout << sum << endl;
	cout << "-----------" << endl;

	//so wie der Schüler es (eigentlich nicht) machte, (aber wir tun einfach mal so)
	for(int i = 0, j = MAX, sum = 0L; i <= MAX/2; sum+=(i++)+(j--));
	cout << sum << endl;
	cout << "-----------" << endl;

	//so wie der Schüler es tatsächlich machte (die beste lösung 8D)
	cout << (MAX+1)*MAX/2 << endl;
	cout << "-----------" << endl;


	//körner auf einem schachbrett zusammenzählen. Körner verdoppeln sich auf jedem Feld.
	sum = 0L;
	for(int i = 1; i<=64; ++i){
		sum += korn;
		cout << "Feld: " << i << " Körner: " << korn << " Summe: " << sum << endl;
		korn = pow(2,i);
	}

	cout << "Es befinden sich " << sum << " Körner auf dem Feld.\n" << endl << "Das Gesamtgewicht beträgt: " << sum*KORN_GEWICHT << " Tonnen." << endl;
	cout << "Es werden " << (sum*KORN_GEWICHT)/10000 << " Züge benötigt, um alle Körner abzutransportieren." << endl;
	cout << "Die Transportationsdauer beträgt: " << (sum*KORN_GEWICHT)/10000/48 << " Tage" << endl;
	cout << "Oder: " << (sum*KORN_GEWICHT)/10000/48/365.25 << " Jahre" << endl;

/*
  	Die gleiche Aufgabe in kryptisch
	i ist der Zähler, k sind die körner und die Variable die nach links geshiftet wird, n ist das limit, summe ist die gesamtsumme aller Körner
	Bei jeder ausführung wird zuerst die summe mit k verodert. Als nächstes wird k um 1 nach links geshiftet um die Zahl zu verdoppeln.
	Zuletzt wird der Zähler erhöht und die Schleife wiederholt sich bis das Limit erreicht wird.
		1.	2.	3.	4.	5.
  k	  	0001	0010	0100	1000	10000		
  sum 		0001	0001	0011	0111	01111
  k^sum		0001	0011	0111	1111	11111
  dec		1d		3d		7d		15d		31d

  */
	for (unsigned long long i = 1, k = 1, n = 64, sum = 1; i < n; cout << (sum ^= (k <<= 1)) << " bis Feld: " << ++i << endl);
	return 0;
}


