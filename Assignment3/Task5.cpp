/*
Author: Michael
Date: 2018-05-06
Function: Calculate a(16) which satisfies a(n)=3*a(n-1)+2 and a(1)=2, using recursion
*/
#include<stdio.h>
int a(int n){
	return (n == 1) ? 2 : 3 * a(n - 1) + 2;	//If n=1 then returns 2, otherwise return 3*a(n-1)+2, recursively
}
int main(){
	printf("a16 is %d.\n", a(16));
	return 0;
}
//Last modified time: 2018-05-06 16:40