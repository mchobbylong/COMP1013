/*
Author: Michael
Date: 20180401
Function: Task2 in Assignment2 - Check if it's multiple of 2/3
*/
#include<stdio.h>

int n;

int main()
{
	printf("Input an integer: ");
	scanf("%d", &n);
	bool x = (n % 2), y = (n % 3);
	if (!x && !y)
		printf("The number is multiple of both 2 and 3.\n");
	else if (!x)
		printf("The number is multiple of 2.\n");
	else if (!y)
		printf("The number is multiple of 3.\n");
	else printf("The number is not multiple of neither 2 or 3.\n");
	return 0;
}