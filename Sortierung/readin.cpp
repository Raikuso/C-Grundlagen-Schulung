/*
 * readin.cpp
 *
 *  Created on: 02.09.2020
 *      Author: pd04381
 */

#include <iostream>
using namespace std;
#include "sort.h"

void readin(unsigned int d){
	extern double arr[];
	unsigned int i = 0;
	for(i=0; i < d; i++){
		cout << "Index " << i << ": ";
		cin >> arr[i];
	}
}


