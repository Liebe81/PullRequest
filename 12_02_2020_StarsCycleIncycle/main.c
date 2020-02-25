/*
 * main.c
 *
 *  Created on: 12 февр. 2020 г.
 *      Author: liebe
 */
#include <stdio.h>
void printStars(int starsInRow, int rows);


int main(){
	printStars(5,7);


return 0;

}

void printStars(int starsInRow, int rows){
	int i, j;
	for(j=1; j<=rows; j++){
		for(i=1; i<=starsInRow; i++){
			printf("* ");
		}
		printf("\n");
	}
}


