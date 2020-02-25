/*
 * main.c
 *
 *  Created on: 5 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
int increasingSequence4Nummer (int num1, int num2, int num3, int num4);



int main(){

	increasingSequence4Nummer(25,27,33,5);

	return 0;

}


int increasingSequence4Nummer (int num1, int num2, int num3, int num4){

int least1;

	if (num1<num2<num3<num4){
		least1=num1;
		printf("least1=%d");
	}
		if (num2<num1<num3<num4){
			least1=num2;
	}else{
		if (num3<num1<num2<num4){
				least1=num3;
	}else{
		if (num4<num3<num2<num1){
			least1=num4;
		}

	}
		return least1;
	}
	}



