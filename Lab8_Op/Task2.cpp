/*
Author: Michael
Date: 2018-04-26
Function: Convert a number string to "int" type
*/
#include<stdio.h>
#include<string.h>

int strnum(char s[]){
	int num = 0, l = strlen(s);	//Initialize num as the return value of the function, and the length of string
	for (int i = (s[0] >= '0' && s[0] <= '9') ? 0 : 1; i < l; ++i)	//Ignore the first character if it is NOT a digit
		num = num * 10 + s[i] - '0';
	if (s[0] == '-') num = -num;	//Deal with the minus number
	return num;
}

int main(){
	char s[100];
	printf("Please input an integer: ");
	scanf("%s", s);
	printf("%d\n", strnum(s));	//strnum(char *) is to convert from string to int
	return 0;
}
//Last modified time: 2018-04-26 20:23