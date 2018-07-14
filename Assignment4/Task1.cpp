/*
Author: Michael
Date: 2018-05-24
Function: Output a number array using pointer
*/
#include<stdio.h>
int main(){
	int n = 0, a[20], t;
	printf("Please input no more than 20 integers, ended with -1:\n");
	scanf("%d", &t);	//Read the first number
	while (t != -1 && n < 20){	//Check if the number is not -1, and there is enough space to store
		a[n++] = t;
		scanf("%d", &t);
	}
	printf("The %d numbers are:\n", n);
	for (int *p = a; p < a + n; ++p)	//Use "for" to define a pointer, then move it afterwards one by one
		printf("%x: %d\n", p, *p);
	printf("\n");
	return 0;
}
//Last modified time: 2018-05-24 16:17