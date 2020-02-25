/*
 * main.c
 *
 *  Created on: 5 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
int sumNumber(int number);

int main(){
	int number;
	printf("input a number");
	fflush(stdout);
	scanf("%d", &number);

	sumNumber(number);


	printf("Summer is %d ", number);
	return 0;


}

int sumNumber(int number){
	int i = 1;
	int res = 0;
	while(i<=number){

			res = res+1;
			i++;

	}

return res;
}


