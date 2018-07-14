/*
Author: Michael
Date: 2018-04-26
Function: Count the number of words in the sentence ended with 'End'.
*/
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int cnt = 0;	//Use variable cnt to count the words
	scanf("%s", s);	//Read the first word
	while (strcmp(s, "End") != 0){	//Loop when the word s is NOT 'End'
		++cnt;
		scanf("%s", s);	//Continue reading words
	}
	printf("The number of words is %d.\n", cnt);
	return 0;
}
//Last modified time: 2018-04-26 16:59