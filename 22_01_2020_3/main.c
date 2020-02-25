/*
 * main.c
 *
 *  Created on: 22 янв. 2020 г.
 *      Author: liebe
 */

#include<stdio.h>

int sum (int a, int b);

int main(){
	int res = sum(5,4);
	printf("sum is %d", res);

	int a = 6;
	res = power2(a);
	printf("square is %d",res);

	return 0;

}

int sum(int a, int b){
	return a+b;


}

int power2(int a){
	 return a*a;

}

int power3(int a){
	return power2(a)*a;
}

