/*
Author: Michael
Date: 2018-04-19
Function: Write two functions: main funtion and a sub‐function compareASCIICode.
*/
#include<stdio.h>

int check(char x, char y){
	if (x > y) return 1;
	if (x < y) return -1;
	return 0;
}

int main(){
	char a, b, t;
	printf("Please input the first character: ");
	scanf("%c", &a);
	t = a;
	while (t != '\n') scanf("%c", &t);	//To avoid other characters, including \n, in the same line, then read the second char in the next line
	printf("Please input the second character: ");
	scanf("%c", &b);
	int v = check(a, b);
	switch (v){
		case 1:
			printf("The first character's ASCII code is larger than the second\'s.\n");
			break;
		case 0:
			printf("The first character's ASCII code is equal to the second\'s.\n");
			break;
		case -1:
			printf("The first character's ASCII code is smaller than the second\'s.\n");
			break;
	}
	return 0;
}
//Last modified time: 2018-04-19 23:00