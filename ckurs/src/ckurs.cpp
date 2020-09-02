//============================================================================
// Name        : ckurs.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <cstddef>
using namespace std;

int main1() {
	//GZ-Datentypen
	short var0 = 4711;
	int var1 = 4711;
	long var2 = 4711;
	unsigned long var5 = -4711;
	//FKZ-Datentypen
	float var10 = 5123456789.2344562346346346534;
	double var11 = 5123456789.2344562346346346534;
	long double var12 = 5123456789.2344562346346346534;
	//Text-Datentypen
	char var3 = 'a';
	char var20[10] = "abcdefghi";
	string var4 = "abcdefghijklmnopqrstuvwxyz";
	//Bool
	const bool var31 = true; //const makes read-only variables

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << "Int:\t" << var1 << endl;
	cout << "Short:\t" << var0 << endl;
	cout << "Long:\t" << var2 << endl;
	cout << "Unsigned Long:\t" << var5 << endl;
	cout << "Char:\t" << var3 << endl;
	cout << "Char Array:\t" << var20 << endl;
	cout << "String:\t" << var4 << endl;
	cout << "Float:\t" << fixed << setprecision(20) << var10 << endl; //fixed & setprecision() bleibt bleibend gesetzt bis man es wieder verändert
	cout << "Double:\t" << var11 << endl;
	cout << sizeof(double) << endl;
	cout << "Long Double:\t" << var12 << endl;
	cout << sizeof(long double) << endl;
	cout << "Bool:\t" << var31;
	return 0;
}
