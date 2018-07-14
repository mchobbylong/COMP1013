/*
Author: Michael
Date: 2018-04-15
Function: Calculate the number of digits in a positive integer and decide if this positive integer is a perfect square.
*/
#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Input a positive integer: ");
	scanf("%d", &n);
	int t = n, digits = 0;	//Calculate digits
	while (t){
		++digits;
		t /= 10;	//Delete one digit
	}
	printf("This number has %d digits.\n", digits);
	int i;
	for (i = 1; i * i < n; ++i);	//Scan for the square root of n
	if (i * i == n)	//If the square root of n exists
		printf("This number is a perfect square.\n");
	else
		printf("This number is not a perfect sqare.\n");
	return 0;
}
//Last modified time: 2018-04-15 20:28