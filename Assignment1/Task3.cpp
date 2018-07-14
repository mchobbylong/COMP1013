/*
Author: Michael
Date: 20180401
Function: Task3 in Assignment1 - Reverse a number which no more than 3 digits
*/
#include<stdio.h>

int n;

int main(){
	printf("Please input a positive integer: ");
	scanf("%d", &n);
	if (n > 999)
		printf("The input is too big\n");
	else {
		int m = 0;
		for (; n; n /= 10)
			m = m * 10 + n % 10;
		printf("The reversed integer is %d.\n", m);
	}
	return 0;
}