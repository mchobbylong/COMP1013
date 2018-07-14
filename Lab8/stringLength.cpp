/*
Author: Michael
Date: 2018-04-26
Function: Define "int stringLength(char[])" and use a header file.
*/
#include<stdio.h>

int stringLength(char s[]){
	int len = 0;
	for (; s[len] != '\0'; ++len);
	return len;
}
//Last modified time: 2018-04-26 17:13