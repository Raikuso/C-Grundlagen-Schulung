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

	//so wie der Sch�ler es (eigentlich nicht) machte, (aber wir tun einfach mal so)
	for(int i = 0, j = MAX, sum = 0L; i <= MAX/2; sum+=(i++)+(j--));
	cout << sum << endl;
	cout << "-----------" << endl;

	//so wie der Sch�ler es tats�chlich machte (die beste l�sung 8D)
	cout << (MAX+1)*MAX/2 << endl;
	cout << "-----------" << endl;


	//k�rner auf einem schachbrett zusammenz�hlen. K�rner verdoppeln sich auf jedem Feld.
	sum = 0L;
	for(int i = 1; i<=64; ++i){
		sum += korn;
		cout << "Feld: " << i << " K�rner: " << korn << " Summe: " << sum << endl;
		korn = pow(2,i);
	}

	cout << "Es befinden sich " << sum << " K�rner auf dem Feld.\n" << endl << "Das Gesamtgewicht betr�gt: " << sum*KORN_GEWICHT << " Tonnen." << endl;
	cout << "Es werden " << (sum*KORN_GEWICHT)/10000 << " Z�ge ben�tigt, um alle K�rner abzutransportieren." << endl;
	cout << "Die Transportationsdauer betr�gt: " << (sum*KORN_GEWICHT)/10000/48 << " Tage" << endl;
	cout << "Oder: " << (sum*KORN_GEWICHT)/10000/48/365.25 << " Jahre" << endl;

/*
  	Die gleiche Aufgabe in kryptisch
	i ist der Z�hler, k sind die k�rner und die Variable die nach links geshiftet wird, n ist das limit, summe ist die gesamtsumme aller K�rner
	Bei jeder ausf�hrung wird zuerst die summe mit k verodert. Als n�chstes wird k um 1 nach links geshiftet um die Zahl zu verdoppeln.
	Zuletzt wird der Z�hler erh�ht und die Schleife wiederholt sich bis das Limit erreicht wird.
		1.		2.		3.		4.		5.
  k	  	0001	0010	0100	1000	10000
  sum 	0001	0001	0011	0111	01111
  k^sum	0001	0011	0111	1111	11111
  dec	1d		3d		7d		15d		31d

  */
	for (unsigned long long i = 1, k = 1, n = 64, sum = 1; i < n; cout << (sum ^= (k <<= 1)) << " bis Feld: " << ++i << endl);
	return 0;
}


