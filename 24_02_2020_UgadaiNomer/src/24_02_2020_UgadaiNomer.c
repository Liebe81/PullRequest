/*
 ============================================================================
 Name        : 24_02_2020_UgadaiNomer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void guessNumber();

int main(void) {
	guessNumber();


	return 0;
}

void guessNumber(){
	int playGame = 1;
	int min, max;
	char playGameAnswer;
	while(playGame==1){
		printf("Please enter min possible number:");
		fflush(stdout);
		scanf("%d", &min);

		printf("Please enter max possible number:");
				fflush(stdout);
				scanf("%d", &max);

				int candidate;
				char answer;
				printf("Please guess the number from %d to %d\n", min, max);
				candidate = (min+max)/2;
				while(min!=max){
					printf("Is the number more than %d (y/n)?\n", candidate);
					fflush(stdout);
					scanf(" %c", &answer);
					if(answer=='y'){
						min = candidate+1;
					}else{
						max = candidate;
					}
					candidate = (min+max)/2;
				}
				printf("Your number is %d\n", min);
				printf("Do you want play again (y/n)?\n");
				fflush(stdout);
				scanf(" %c", &playGameAnswer);
				if(playGameAnswer != 'y'){
					playGame = 0;
					printf("THE GAME IS OVER!!!");
				}

	}
}
