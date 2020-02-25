/*
 * main.c
 *
 *  Created on: 29 янв. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
float median(int n1, int n2);

int main(){
	int num1 = 10;
	int num2 = 13;
	float resultat;
	printf("%.2f\n", median(num1,num2));
	resultat = median(124, 315);
	printf("%.2f\n", resultat);

	return 0;

}

float median(int n1, int n2){
	float res;
	res = (float)(n1+n2)/2;
	return res;

}
