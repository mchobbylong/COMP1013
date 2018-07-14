/*
Author: Michael
Date: 2018-05-06
Function: Output English letters only in the input string
*/
#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	printf("Please input a string: ");
	scanf("%s", str);
	int n = strlen(str);
	printf("The string with English letters only is: \n");
	for (int i = 0; i < n; ++i)	//Scan every characters in the string
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')	//If it is an English letter
			printf("%c", str[i]);
	printf("\n");
	return 0;
}
//Last modified time: 2018-05-06 16:25