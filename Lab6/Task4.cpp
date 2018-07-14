/*
Author: Michael
Date: 2018-04-12
Function: Print a triangle in '*' and '='.
*/
#include<stdio.h>

int main(){
	for (int i = 7; i; --i){	//Looping variable i refers to the number of '*' in the current row
		char ch = (i & 1)? '*' : '=';	//If i is a odd number, then give ch a '*', otherwise a '='
		for (int j = 1; j <= i; ++j)	//Looping variable j refers to the No. of the current column
			printf("%c", ch);
		printf("\n");	//Go to next row after all '*' is printed
	}
}
//Last change: 2018-04-12 17:14