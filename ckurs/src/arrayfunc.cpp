/*
 * arrayfunc.cpp
 *
 *  Created on: 03.09.2020
 *      Author: PD04381
 */

#include <iostream>
using namespace std;

int f1(int x){
	cout << "f1" << endl;
	return 2*x;
}

int f2(int x){
	cout << "f2" << endl;
	return 3*x;
}

int f3(int x){
	cout << "f3" << endl;
	return 4*x;
}

int main(){
	int (*arr[3])(int); //array aus 3 pointern -> funktionen(int) -> int
	int i;
	arr[0]=f1;
	arr[1]=f2;
	arr[2]=f3;

	for(i=0;i<3;++i)
		cout << (*arr[i])(10) << endl;

	return 0;
}
