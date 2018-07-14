/*
Author: Michael
Date: 2018-04-14
Function: Print a triangle in '#' and '+' like this:
#
++
###
++++
#####
++++++
#######
++++++
#####
++++
###
++
#

*/
#include<stdio.h>

int main(){
	for (int i = 1; i <= 7; ++i){	//Print the first 7 rows
		char ch = (i & 1) ? '#' : '+';	//Determine what this row should output, stored in ch
		for (int j = 1; j <= i; ++j)	//The number of characters this row should output is exactly the row number
			printf("%c", ch);
		printf("\n");	//Go to next line
	}
	for (int i = 6; i; --i){	//Print the last 6 rows, and use i to express the number of characters this row should output
		char ch = (i & 1) ? '#' : '+';	//All the same as the upper 'for'
		for (int j = 1; j <= i; ++j)
			printf("%c", ch);
		printf("\n");
	}
	return 0;
}
//Last modified time: 2018-04-14 17:01