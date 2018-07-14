/*
Author: Michael
Date: 2018-05-17
Function: Reverse order of n integers, and use dynamic memory allocation instead of array
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Please input the number of data: ");
	scanf("%d", &n);
	int *p = (int*)malloc(n * sizeof(int));	//Allocate a block of memory for storing the integers
	if (p == NULL){	//If there's no enough space to be allocated
		printf("Memory allocation failed!\n");
		return 0;
	}
	printf("Please input %d integers:\n", n);
	for (int i = 0; i < n; ++i)
		scanf("%d", p + i);	//Read numbers then store into the memory block after the pointer p
	printf("\nThe reverse-ordered integers are:\n");
	for (int i = n; i; --i)
		printf("%d ", *(p + i - 1));
	printf("\n");
	free(p);
	return 0;
}
//Last modified time: 2018-05-17 23:00