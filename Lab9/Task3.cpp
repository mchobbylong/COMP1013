/*
Author: Michael
Date: 2018-05-03
Function: Calculate 2 to the power of n
*/
#include<stdio.h>

int Power2(int n){
	return (n == 0) ? 1 : 2 * Power2(n - 1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", Power2(n));	//Power2(n) returns 2 to the power of n
	return 0;
}
//Last modified time: 2018-05-03 21:36