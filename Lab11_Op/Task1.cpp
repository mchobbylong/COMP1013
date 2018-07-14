/*
Author: Michael
Date: 2018-05-18
Function: Use ZeroInBinary() to count 0s in n's binary representation
*/
#include<stdio.h>

int ZeroInBinary(int v){
	int cnt = 0;
	for (; v; v >>= 1)	//In each loop, use right-shift to delete the last digit in n's binary representation
		cnt += 1 - (v & 1);	//Use & to get the last digit of n's binary representation. Then use 1-x to convert to count number
	return cnt;
}

int main(){
	int n;
	printf("Please input a positive integer: ");
	scanf("%d", &n);
	printf("The number of 0's in n's binary representation is %d.\n", ZeroInBinary(n));
	return 0;
}
//Last modified time: 2018-05-18 21:35