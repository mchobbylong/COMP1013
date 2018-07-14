/*
Author: Michael
Date: 2018-04-12
Function: Add all the positive integers that satisfy the following conditions:
	1. the integer is under 1000.
	2. the integer is multiple of 3
	3. the integer is not multiple of 5
*/
#include<stdio.h>

int main(){
	int sum = 0;	//Use an integer variable to store the result
	for (int i = 1; i <= 1000; ++i)	//Define a looping variable i in this loop, make sure it is less or equal to 1000, then increase by 1
		if (i % 3 == 0 && i % 5 > 0)	//If i is multiple of 3 and not multiple of 5
			sum += i;
	printf("Sum of the numbers that satisfy the conditions is %d.\n", sum);
	return 0;
}
//Last change: 2018-04-12 17:19