/*
Author: Michael
Date: 2018-04-12
Function: Calculate sum of the odd numbers from 1 to 100.
*/
#include<stdio.h>

int main(){
	int sum = 0;	//Use an integer variable to store the result
	for (int i = 1; i <= 100; i += 2)	//Define a looping variable i in this loop, make sure it is less or equal to 100, then increase by 2
		sum += i;
	printf("Sum of the odd numbers from 1 to 100 is: %d.\n", sum);
	return 0;
}
//Last change: 2018-04-12 17:07