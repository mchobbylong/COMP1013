/*
Author: Michael
Date: 2018-05-04
Function: Use stringCompare() to compare two strings
*/
#include<stdio.h>

int stringCompare(char str1[], char str2[]){	//Nearly the same as strcmp() in string.h
	int i = 0;
	for (; str1[i] != '\0'; ++i)	//Compare each characters
		if (str1[i] != str2[i])
			return str1[i] - str2[i];	//If find difference
	if (str2[i] == '\0') return 0;	//No any difference
	else return -str2[i];	//str1 ended before str2
}

int main(){
	char str1[50], str2[50];
	printf("Input two strings seperated with a space:\n");
	scanf("%s %s", str1, str2);
	int result = stringCompare(str1, str2);
	if (result < 0)
		printf("str1 is smaller than str2.\n");
	else if (result > 0)
		printf("str1 is larger than str2.\n");
	else printf("str1 is equal to str2.\n");
	return 0;
}
//Last modified time: 2018-05-04 01:14