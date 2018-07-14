/*
Author: Michael
Date: 2018-04-14
Function: Print a triangle in '*', which the number of '*' on the last row is an odd number provided by user, like this:
  *
 ***
*****

*/
#include<stdio.h>

int main(){
	int n;
	printf("Please input the number of '*' in the last row (must be an odd number): ");
	scanf("%d", &n);
	while (1 - n % 2){	//Check if it is an odd number, and provide another input
		printf("Invalid number!\nPlease input the number of '*' in the last row (must be an odd number): ");
		scanf("%d", &n);
	}
	int m = n / 2 + 1;	//Calculate the actual number of output rows
	for (int i = 1; i <= m; ++i){	//Print m rows
		for (int j = 1; j <= m - i; ++j) printf(" ");	//Print (m-i) spaces
		for (int j = 1; j <= i * 2 - 1; ++j) printf("*");	//Print (i*2-1) '*'
		printf("\n");
	}
	return 0;
}
//Last modified time: 2018-04-14 17:25