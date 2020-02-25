/*
 * main.c
 *
 *  Created on: 24 февр. 2020 г.
 *      Author: liebe
 */
#include<stdio.h>
int binarySearch(int arr[], int size, int num);

int main(){

	int arr[]={1,4,6,9,10,12,14,18,19};
	int size = sizeof arr/sizeof arr[0];
	int res = binarySearch(arr, size, 14);
	(res<0)? printf("No such number"):printf("index number in array is %d", res);

	return 0;
}

int binarySearch(int arr[], int size, int num){
	int left, right, middle;
	for(left=0,right=size-1; left<=right;){
		middle = (left+right)/2;
		if(arr[middle]==num){
			return middle;
	}if(arr[middle]>num){
		right = middle-1;

	}else{
		left = middle+1;
	}
}
	return -1;
}

