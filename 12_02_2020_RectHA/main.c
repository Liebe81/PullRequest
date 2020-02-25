/*
 * main.c
 *
 *  Created on: 12 февр. 2020 г.
 *      Author: liebe
 */
#include <stdio.h>
void printStars(int starsInRow, int rows);
void printSquare(int height, int length);


int main(){

	printSquare(6,10);


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
void printSquare(int height, int length){
	int i, j;
	for(j=1;j<=height; j++){
		for(i=1; i<=length; i++){
		if(i==1 || j==1 || j==height || i==length){
			printf("* ");
		}else{
			printf("  ");
		}
		}
		printf("\n");
	}
}
