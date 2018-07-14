/*
Author: Michael
Date: 2018-05-10
Function: Write a function char* stringCopy(char *dest, char *res) to copy the string from res to dest and return the copied string
*/
#include<stdio.h>

char* stringCopy(char *dest, char *res){
	int i = 0;
	for (; *(res + i) != '\0'; ++i)
		*(dest + i) = *(res + i);
	*(dest + i) = '\0';
	return dest;
}

int main(){
	char str1[20], str2[20];
	scanf("%s", str1);
	stringCopy(str2, str1);
	printf("%s\n", str2);
	return 0;
}
//Last modified time: 2018-05-10 20:50