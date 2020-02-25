/*
 * main.c
 *
 *  Created on: 19 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>

void fillArray(int size);
void printArray(int arr[], int size);
int findMax(int arr[], int size);
void prettyPrintArray(int arr[], int size);

int main(){
	fillArray(5);
	printf("\n");
	int array1[] = {13,7,27,33,5,9};
	printf("Max in array is: %d", findMax(array1,6));
	printf("\n");
	prettyPrintArray(array1, 6);
	return 0;

}

void fillArray(int size){
	int arr[size];
	int i;
	for(i=0; i<size; i++){
		printf("Enter value no.%d: " ,i);
		fflush(stdout);
		scanf("%d", &arr[i]);

	}
	printf("\nYour array is:  ");
	printArray(arr, size);

}


void printArray(int arr[], int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}


}

int findMax(int arr[], int size){
	int i;
	int max = arr[0];
	for(i=0; i<size; i++){
		if(arr[i]>max){
			max = arr[i];

		}
	}
	return max;

}


void prettyPrintArray(int arr[], int size){
	printf("Your array is: {");
	int i;
	for(i=0; i<size; i++){
		printf("%d", arr[i]);
		if (i<size-1)
			printf(",");
	}
	printf("}");

}

