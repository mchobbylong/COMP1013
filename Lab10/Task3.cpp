/*
Author: Michael
Date: 2018-05-10
Function: Modify the following program so that values of a and b can be exchanged
*/
#include <stdio.h>
void exchange(int* , int*);
int main()
{
	int a = 10, b = 20;
	printf("before exchange: a = %d, b = %d\n", a, b);
	exchange(&a, &b);	//Give two addresses to the function
	printf("after exchange: a = %d, b = %d\n", a, b);
	return 0;
}
void exchange(int* px, int* py)	//Transfer two pointers to exchange
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
//Last modified time: 2018-05-10 20:49