/*
Author: Michael
Date: 2018-05-06
Function: Calculate the sum of 2^n1, 2^n2 and 2^n3 using header file and Power2() function
*/
#include<stdio.h>
#include "Power2.hpp"
int main(){
	int n1, n2, n3;
	printf("Please input 3 nature numbers: ");
	scanf("%d%d%d", &n1, &n2, &n3);
	printf("The sum of 2^%d, 2^%d and 2^%d is %d.\n", n1, n2, n3, Power2(n1) + Power2(n2) + Power2(n3));
	return 0;
}
//Last modified time: 2018-05-06 16:34