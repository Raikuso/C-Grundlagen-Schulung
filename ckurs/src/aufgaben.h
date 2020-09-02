/*
 * aufgaben.h
 *
 *  Created on: 01.09.2020
 *      Author: pd04381
 */

#ifndef AUFGABEN_H_
#define AUFGABEN_H_

double brutto(double netto, double mwst);	//netto -> brutto
double mymin(double, double);
double mymax(double, double);
double mittel(double, double);
double mypow(double base, int exponent);
void printarray(int arr[], unsigned int d);
int arraysum(int arr[], unsigned int d);
double arrayavg(int arr[], unsigned int d);
double arraysum(double arr[], unsigned int d);
double arrayavg(double arr[], unsigned int d);

bool searchvalue(int arr[], unsigned int d, int nmbr);



#endif /* AUFGABEN_H_ */
