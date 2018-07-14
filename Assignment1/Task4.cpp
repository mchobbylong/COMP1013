/*
Author: Michael
Date: 20180402
Function: Task4 in Assignment1 - Determine if a character is a digit, an English letter or others
*/
#include<stdio.h>

char ch;

int main(){
	printf("Input a character: ");
	scanf("%c", &ch);
	printf("This character is ");
	if (ch >= '0' && ch <= '9')
		printf("a digit.\n");
	else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		printf("an English letter.\n");
	else
		printf("neither a digit nor an English letter.\n");
	return 0;
}