#include "aufgaben.h"
#include <iostream>
using namespace std;

double brutto(double netto, double mwst){
	return netto*(1.+mwst/100.);
}

double mymin(double zahl1, double  zahl2){
	return zahl1<zahl2?zahl1:zahl2;
}

double mymax(double zahl1, double  zahl2){
	return zahl1>zahl2?zahl1:zahl2;
}

double mittel(double zahl1, double  zahl2){
	return (zahl1+zahl2)/2.;
}

double mypow(double base, int exponent){
	double res = 1;
	for(;exponent>0; --exponent){
		res *= base;
	}
	return res;
}

void printarray(int arr[], unsigned int d){
	unsigned int i;
	for(i = 0; i < d; ++i){
			cout << "arr[" << i <<"]: " << arr[i] << endl;
		}
}

int arraysum(int arr[], unsigned int d){
	unsigned int i;
	int sum = 0;
	for(i = 0; i < d; ++i){
			sum += arr[i];
		}
		return sum;
}

double arrayavg(int arr[], unsigned int d){
	return (double)arraysum(arr, d)/d;
}

bool searchvalue(int arr[], unsigned int d, int nmbr){
	bool x = false;
	unsigned int i;

	for(i = 0; i < d; ++i){
		if(arr[i] == nmbr){
			x = true;
			break;
		}
	}
	return x;
}

