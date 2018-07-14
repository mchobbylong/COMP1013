/*
Author: Michael
Date: 2018-05-18
Function: Randomly create a string that contains only English letters
with a length given by user, then append it into a file.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));	//Initialize the seed for rand() according to system time
	int n;
	printf("Input the length of string: ");
	scanf("%d", &n);
	FILE *p = fopen("Task2.txt", "a");	//Mode string "a" means append content to a file
	if (p == NULL){	//If failed to open the file then exit
		printf("Failed to open file 'Task2.txt'!\n");
		return 0;
	}
	char *pn = (char*)malloc((n + 1) * sizeof(char));	//Allocate a block of memory to store n+1 chars (including n random letters and '\0')
	for (int i = 0; i < n; ++i)	//Generate n characters
		*(pn + i) = 'a' + rand() % 26;	//Generate random English letter by counting ASCII code: generate a random number with a range of 0..25, then add the ASCII code of 'a'
	*(pn + n) = '\0';	//Set the last char be '\0'
	fprintf(p, "%s\n", pn);	//Directly print pn, which also represents a string
	fclose(p);
	free(pn);	//Free the block of memory
	printf("The random string is appended to 'Task2.txt'!\n");
	return 0;
}
//Last modified time: 2018-05-18 23:48