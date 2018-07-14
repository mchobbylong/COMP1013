/*
Author: Michael
Date: 2018-04-26
Function: Define "int stringLength(char[])" and use a header file.
*/
#include<stdio.h>
#include "stringLength.hpp"
int main(){
	char s[60];
	printf("Please input a string: ");
	scanf("%s", s);
	printf("The length of the string is %d.\n", stringLength(s));	//Use the function defined in the header file
	return 0;
}
//Last modified time: 2018-04-26 17:13