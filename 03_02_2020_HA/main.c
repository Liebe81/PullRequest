/*
 * main.c
 *
 *  Created on: 3 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
float median(int n1, int n2, int n3);

int main(){
	int num1 = 10;
	int num2 = 13;
	int num3 = 15;
	float resultat;
	printf("%.2f\n", median(num1,num2,num3));
	resultat = median(124, 223, 315);
	printf("%.2f\n", resultat);

	return 0;

}

float median(int n1, int n2, int n3){
	float res;
	res = (float)(n1+n2+n3)/3;
	return res;

}





