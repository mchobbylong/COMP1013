/*
Author: Michael
Date: 2018-05-04
Function: Sort all the words using sort() function
*/
#include<stdio.h>
#include<string.h>

void sort(char s[][20], int n){
	char t[20];
	for (int i = 0; i < n; ++i)
		for (int j = i + 1; j < n; ++j)
			if (strcmp(s[i], s[j]) > 0){	//If s[i] > s[j]
				strcpy(t, s[i]);	//Exchange s[i] and s[j]
				strcpy(s[i], s[j]);
				strcpy(s[j], t);
			}
}

int main(){
	char str[20][20];
	int n;
	printf("Input a positive integer n, then n words seperated with spaces:\n");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%s", str[i]);
	sort(str, n);
	printf("\nThe sorted words in ascending order are:\n");
	for (int i = 0; i < n; ++i)
		printf("%s ", str[i]);
	printf("\n");
	return 0;
}
//Last modified time: 2018-05-04 01:09