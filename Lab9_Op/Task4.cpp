/*
Author: Michael
Date: 2018-05-04
Function: Check all multiple of 3 under 1000 whether they are all Narcissistic numbers or not
*/
#include<stdio.h>

void check(int n){
	if (n == 153) return;	//Define the exit of the recursion
	int m = 0, t;
	while (n){
		t = n % 10;	//Get the last digit in n
		m += t * t * t;	//Sum the digit to the power of 3
		n /= 10;	//Delete the last digit
	}
	check(m);	//Check the new generated number recursively
}

int main(){
	for (int i = 3; i <= 1000; i += 3)
		check(i);
	printf("Check succeed.\n");	//If the program exited normally, then all numbers have passed the check.
	return 0;
}
//Last modified time: 2018-05-04 01:06