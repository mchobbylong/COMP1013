/*
Author: Michael
Date: 2018-04-19
Function: Read a string using “%s” in a scanf statement,
	and count the number of characters in that string without using any string function.
*/
#include<stdio.h>
int main(){
	char s[51];	//Char array
	scanf("%s", s);
	int n = 0;	//Length of the string
	for (; s[n] != '\0'; n++);	//Equal to: while (s[n] != '\0') n++;
	printf("%d\n", n);
	return 0;
}
//Last modified time: 2018-04-19 23:10