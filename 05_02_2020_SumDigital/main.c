/*
 * main.c
 *
 *  Created on: 5 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
int SumDigitis(int num);
int main(){
	printf("%d", SumDigitis(8765));
	return 0;

}

int SumDigitis(int num){
	int sum = 0;
	while(num!=0){
		sum = sum + num%10;
		num = num/10;

	}
	return sum;
}


