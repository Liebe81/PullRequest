/*
 * main.c
 *
 *  Created on: 12 февр. 2020 г.
 *      Author: liebe
 */
#include <stdio.h>

void printStars(int a, int b);


int main(){
	int a = 6,b = 10;
	a= a*b;
	printStars(a,b);


return 0;
}




void printStars(int a, int b){


	int i=1, j=1;

	while (i<=a){

	if(j<b){
		printf("*");
		j++;
	}else{
		printf("*\n");
		j=1;
	}
	i++;


	}
}



