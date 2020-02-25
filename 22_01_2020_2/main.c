/*
 * main.c
 *
 *  Created on: 22 янв. 2020 г.
 *      Author: liebe
 */


#include<stdio.h>
 int main(){
	 int a = 10;
	 printf("Variable a1 is %d\n", a);
	 a = 15;
	 printf("Variable a2 is %d\n", a);
	 a = 5+3;
	 printf("Variable a3 is %d\n", a);

	 int b = 20;
	 printf("Variable b is %d\n", b);

	 int c = a+b;
	 printf("Variable c is %d\n", c);

	 int d = c*b;
	 printf("Variable d is %d\n", d);

	 float e = (float)d/3;
	 printf("Variable e is %f\n", e);

	 int r = 12345678%10;
	 printf("Variable r is %d", r);


	 return 0;


 }



