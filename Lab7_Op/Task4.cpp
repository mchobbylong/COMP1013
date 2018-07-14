/*
Author: Michael
Date: 2018-04-20
Function:
Use scanf("%s", ...) to read a string. Calculate the number of
upper cases and number of lower cases. Then output the string
with only English letters left.
*/
#include<stdio.h>

int isUpper(char ch){
	return (ch >= 'A' && ch <= 'Z') ? 1 : 0;
}

int isLower(char ch){
	return (ch >= 'a' && ch <= 'z') ? 1 : 0;
}

int main(){
	char s[1000];
	printf("Input a string:");
	scanf("%s", s);
	int l;
	for (l = 0; s[l] != '\0'; ++l);	//Get length of s without 'strlen'
	int upper = 0, lower = 0;
	for (int i = 0; i < l; ++i){
		upper += isUpper(s[i]);	//Use sub-functions
		lower += isLower(s[i]);
	}
	printf("There are %d upper case(s) and %d lower case(s).\n", upper, lower);
	printf("The formatted string is:\n");
	for (int i = 0; i < l; ++i)
		if (isUpper(s[i]) || isLower(s[i]))	//Implicit conversion: 1-True, 0-False
			printf("%c", s[i]);
	printf("\n");
	return 0;
}
//Last modified time: 2018-04-20 19:51