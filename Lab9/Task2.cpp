/*
Author: Michael
Date: 2018-05-03
Function: Calculate the factorial of n
*/
#include<stdio.h>

int Fac(int n, int m){	//Fac(n, m) means to calculate the factorial of n, and at this moment the result should times m.
	return (m > n) ? 1 : m * Fac(n, m + 1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", Fac(n, 1));	//Fac() returns the factorial of n
	return 0;
}
//Last modified time: 2018-05-03 21:34