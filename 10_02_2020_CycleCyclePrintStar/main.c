/*
 * main.c
 *
 *  Created on: 10 февр. 2020 г.
 *      Author: liebe
 */
#include <stdio.h>

void printStars(int num, int row);

int main(){
	printStars(15,3);

return 0; }

void printStars(int num, int row){
	int i=1, j=1;
	while (i<=num){

	if(j<row){
		printf("*");
		j++;
	}else{
		printf("*\n");
		j=1;
	}
	i++;


	}
}

