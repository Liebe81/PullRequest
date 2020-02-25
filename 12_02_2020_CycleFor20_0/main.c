/*
 * main.c
 *
 *  Created on: 12 февр. 2020 г.
 *      Author: liebe
 */
#include <stdio.h>
void printEvenNumber();


int main(){
	printEvenNumber();

	return 0;
}

void printEvenNumber(){
	int i;
	for(i=20; i>0; i=i-2){
		printf("%d\n",i);

	}
}
