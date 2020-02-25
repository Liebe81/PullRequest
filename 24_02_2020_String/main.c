/*
 * main.c
 *
 *  Created on: 24 февр. 2020 г.
 *      Author: liebe
 */

#include <stdio.h>
#include <string.h>

char* sayHello();
char* sayHelloTo(char* name);


int main(void){
	char name[20];
	gets(name);
	//puts(name);
	puts(sayHelloTo(name));
	char string[100]="This is a string";
	printf("%s\n", string);
	char* string2 = "This is also string";
	printf("%s\n", string2);
	string[5] = 'X';
	printf("%s\n", string);
	puts(sayHello());
	printf("%s", sayHello());


	return 0;
}
char* sayHello(){
	return "Hello!\n";
}

char* sayHelloTo(char* name){
	char welcome[256]="Hello, ";
	if(strcmp("Liuba", name)==0){
		strcpy(name, "Master!");

	}
	return strcat(welcome, name);

}
