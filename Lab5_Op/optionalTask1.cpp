/*
Author: Michael
Date: 2018-03-29
Function: Calculate the difference between two English letters
*/

#include<stdio.h>

int a, b;

int main(){
	printf("Input two English letters seperated by a space: ");
	scanf("%c %c", &a, &b);
	if (a > 90) a -= 32;
	if (b > 90) b -= 32;
	if (a - b > 0){
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	printf("The difference between two letters is %d.\n", b - a);
	return 0;
}