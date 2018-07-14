/*
Author: Michael
Date: 2018-04-26
Function: Inverse the sentence which ended with 'End' and then output.
*/
#include<stdio.h>
#include<string.h>
int main(){
	char s[100], inp[1000];
	inp[0] = '\0';	//Initialize inp[] to be an empty string
	scanf("%s", s);	//Read the first word
	while (strcmp(s, "End") != 0){	//Loop when the word s is NOT 'End'
		strcat(inp, " ");
		strcat(inp, s);	//Add s into inp
		scanf("%s", s);	//Continue reading words
	}
	int len = strlen(inp);
	s[len] = '\0';	//Reuse s[] and store the answer
	for (int i = 0; i < len; ++i)
		s[len - i - 1] = inp[i];	//Reverse each character in inp
	printf("%s\n", s);
	return 0;
}
//Last modified time: 2018-04-26 20:23