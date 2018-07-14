/*
Author: Michael
Date: 2018-05-06
Function: Insert an integer into a given sorted number array
*/
#include<stdio.h>
int main(){
	int INF = 2147483647, x;	//Set the infinity number, and the input number x
	int a[9] = {-INF, 3, 10, 15, 30, 55, 77, INF, 0};	//In case that the input number is smaller than 3 or bigger than 77
	printf("Please input an integer to be inserted: ");
	scanf("%d", &x);
	for (int i = 1; i <= 7; ++i)
		if (a[i - 1] <= x && x <= a[i]){	//Find the supposed position of x, which is i
			for (int j = 6; j >= i; --j)	//Move the numbers after x
				a[j + 1] = a[j];
			a[i] = x;	//Place x into the position
			break;
		}
	printf("The sorted array with the inserted integer is: \n");
	for (int i = 1; i <= 7; ++i)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
//Last modified time: 2018-05-06 16:31