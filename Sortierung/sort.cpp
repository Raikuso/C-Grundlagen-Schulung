/*
 * sort.cpp
 *
 *  Created on: 02.09.2020
 *      Author: pd04381
 */

void sort(unsigned int d){
	extern double arr[];
	unsigned int i, j;
	double swap = 0;

	/*Innere Schleife vergleicht Zahl mit der nächsten Zahl und tauscht diese
	Äußere Schleife lässt innere Schleife 10x ablaufen
	Insgesamt laufen also d * d Schleifen ab, sodass auch die letzte Zahl
	bis nach ganz vorne kann*//*
	for(j=0;j<d-1;j++){
		for(i=0;i<d;++i){
			if(arr[i]>arr[i+1] && i<(d-1)){
				swap = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = swap;
			}
		}

	}*/
	for(i=0;i<(d-1);++i){
		for(j = i+1;j<d;++j){
			if(arr[i]>arr[j]){
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
}



