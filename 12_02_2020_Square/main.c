/*
 * main.c
 *
 *  Created on: 12 февр. 2020 г.
 *      Author: liebe
 */
#include <stdio.h>
void printStars(int starsInRow, int rows);
void printSquare(int stars);


int main(){
	printStars(5,7);
	printSquare(6);


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
void printSquare(int stars){
	int i, j;
	for(j=1;j<=stars; j++){
		for(i=1; i<=stars; i++){
		if(i==1 || j==1 || j==stars || i==stars){
			printf("* ");
		}else{
			printf("  ");
		}
		}
		printf("\n");
	}
}
