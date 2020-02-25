#include<stdio.h>
void reverseArr(int arr[], int size);
void printArray(int arr[], int size);


int main(){

	int arr[]={3,7,0,2,1,9,8,12};

		printArray(arr,8);
		printf("\n");
		reverseArr(arr,8);


	return 0;
}

void reverseeArr(int arr[], int size){

	        int i;
	        int revertArray[size];


		for(i=0; i<size; i++){
			revertArray[size-i-1]=arr[i];

		}


			scanf("%d", &arr[i]);



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





