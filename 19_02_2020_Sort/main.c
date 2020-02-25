/*
 * main.c
 *
 *  Created on: 19 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
/*#include"header.h"

#define WIDTH 80
#define LENGTH (WIDTH +10)

#define boolean int
#define true 1
#define false 0

const float numberPI = 3.14;

void sayHello();

int main(){
	int a = WIDTH;
	printf("%d\n", a);
	sayHello();
	return 0;

} */

void bubbleSort(int arr[], int size);
void printArray(int arr[], int size);
void shekerSort(int arr[], int size);
void insertSort(int arr[], int size);


int main(){
	int arr[]={3,7,0,2,1,9,8,12};
	printArray(arr,8);
	printf("\n");
	//bubbleSort(arr,8);
	//shekerSort(arr,8);
	insertSort(arr,8);

	printArray(arr,8);

	return 0;

}

void bubbleSort(int arr[], int size){
	int i,j;
	for(i=0; i<size-1; i++){
		for(j=0; j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;


			}
		}

	}
}
void printArray(int arr[], int size){
	printf("{");
	int i;
	for (i=0; i<size; i++){
		printf("%d", arr[i]);
		if(i<size-1){
				printf(" ,");

	  }

	}
	 printf("}\n");
    }

void shekerSort(int arr[], int size){
	int left = 0;
	int right = size -1;
	int flag =1;
	while (left < right && flag >0){
		flag =0;
		for(int i=left; i<right; i++){
			if(arr[i]>arr[i+1]){
				int temp =arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				flag =1;

			}
		}
		right --;
		for (int i =right; i>left; i--){
			if(arr[i-1]>arr[i]){
				int temp = arr[i];
				arr[i]=arr[i-1];
				arr[i-1]=temp;
				flag = 1;
			}

		}
		left ++;
	}
}

void insertSort(int arr[], int size){
	int insertTemp, index, i;
	for (i=1; i<size; i++){
		insertTemp = arr[i];
		index = i-1;
		while(index>=0 && arr[index]>insertTemp){
			arr[index+1]=arr[index];
			index = index - 1;
		}
		arr[index+1] = insertTemp;
	}
}







