/*
 * main.c
 *
 *  Created on: 10 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
void printHello (int num);


int main(){
	printHello(7);

	return 0;

}

void printHello (int num){
	int i;
	for (i=0; i!=num; i++){
		printf("%d Hello!\n", i);

	}
}
// то же самое но печасть с единицы
//void printHello (int num){
//	int i;
//	for (i=1; <!=num; i++){
//		printf("%d Hello!\n", i);


