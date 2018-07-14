/*
Author: Michael
Date: 2018-03-29
Function: Get absolute value of an integer, then times 2
*/

#include<stdio.h>

int main(){
	int n;
	printf("Input n: ");
	scanf("%d", &n);
	if (n < 0)
		n = -n;
	n = n + n;
	printf("n = %d\n", n);
	return 0;
}