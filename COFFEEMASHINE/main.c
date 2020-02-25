/*
 * main.c
 *
 *  Created on: 10 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
void coffeeMashine(int choice);
void latte();
void americano();
void espresso();
void cappuccino();
void addCoffee(int quantity);
void addWater(int quantity);
void addMilk(int quantity);


int main(){
	int choice;
	printf("Enter number of drink\n");
	scanf("%d", &choice);

	coffeeMashine(choice);

	return 0;
}


void coffeeMashine(int choice){
	switch (choice){
	case 1:
		latte();
		break;
	case 2:
		americano();
		break;
	case 3:
		espresso();
		break;
	case 4:
		cappuccino();
		break;
	default:
		printf("Error: no such coffee!\n");


	}
}
 void latte(){
	 printf("your choice latte\n");
	 addCoffee(5);
	 addMilk(180);
	 addWater(30);
	 printf("your latte is ready\n");

 }

 void americano(){
	 printf("your choice americano\n");
	 addCoffee(8);
	 addWater(180);
	 printf("your americano is ready\n");

 }

 void espresso(){
	 printf("your choice espresso\n");
	 addCoffee(8);
	 addWater(30);
	 printf("your espresso is ready\n");

 }

 void cappuccino(){
	 printf("your choice cap\n");
	 addCoffee(10);
	 addMilk(180);
	 addWater(30);
	 printf("your cap is ready\n");

 }
  void addCoffee(int quantity){
	  printf("adding %d g coffee", quantity);
 }

  void addWatter(int quantity){
  	  printf("adding %d ml water", quantity);
 }

  void addMilk(int quantity){
  	  printf("adding %d ml milk", quantity);
 }

