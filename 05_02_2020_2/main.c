/*
 * main.c
 *
 *  Created on: 5 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
void isTheNumberSimple(int number);

int main(){
	int number;
	printf("input a number");
	fflush(stdout);
	scanf("%d", &number);

	isTheNumberSimple(number);

}

void isTheNumberSimple(int number){
	int i = 1;
	int d = 0;
	while(i<=number){
		if(number%i++ ==0){
			d++;
		}else
			continue;
		if(d==3) break;

	}
	printf("number %d is %sprime number", number, (d==2)? " " : "not ");

}
