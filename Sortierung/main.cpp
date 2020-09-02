/*
 * main.cpp
 *
 *  Created on: 02.09.2020
 *      Author: pd04381
 */
#include "sort.h"

const unsigned int DIM = 10;
double arr[DIM];

int main(){
	readin(DIM);
	sort(DIM);
	print(DIM);
	return 0;
}
