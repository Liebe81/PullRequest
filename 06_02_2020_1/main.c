/*
 * main.c
 *
 *  Created on: 6 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
#include<stdlib.h>
int isCorrectState(int temp1, int temp2);

int main(){
	int temp1=-10;
	int temp2=105;
	printf("temp1=%d temp2=%d %s\n", temp1, temp2, isCorrectState(temp1,temp2)?"correct":"not correct");
	temp1 =105;
			temp2=-10;
			printf("temp1=%d temp2=%d %s\n", temp1, temp2, isCorrectState(temp1,temp2)?"correct":"not correct");




	return 0;

}

int isCorrectState(int temp1, int temp2){
	if((temp1<0 && temp2 > 100)||(temp2<0 && temp1 > 100)){
		return 1;

	} else {
		return 0;

	}
}

