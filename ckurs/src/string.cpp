/*
 * string.cpp
 *
 *  Created on: 03.09.2020
 *      Author: PD04381
 */

#include <iostream>
using namespace std;
#include "aufgaben.h"
#include <cstring>
#include <cstdio>



int main46523(){
	char s1[10] = { 'f', 'h', 'c', '\0' };
	char s2[10] = "abc";
	char s3[] = "abcde";
	const char *s4 = "abcdef";
	char s5[200] = "";


	unsigned int i;

	for(i = 0; *(s1+i) != '\0'; ++i){
		cout << *(s1+i);
	}

//	cout << "\n------------" << endl;
//	while(*s4){
//		cout << *s4++ << " ";
//	}
//

	cout << "\n------------" << endl;

	puts(s1);
	puts(s2);
	ausgabearray(s3);
	ausgabearray(s4);
	cout << strlen(s1) << endl;
	cout << strlen(s2) << endl;
	cout << strlen(s3) << endl;
	cout << lenString(s4) << endl;
	strcpy(s5,s3);
	puts(s5);
	ausgabearray(s3);



	return 0;
}

