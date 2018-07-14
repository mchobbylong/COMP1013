/*
Author: Michael
Date: 2018-05-17
Function: Use fileCopy() to copy from one file to the other
*/
#include<stdio.h>

int fileCopy(char *destFileName, char *resFileName){
	FILE *dest = fopen(destFileName, "w"), *res = fopen(resFileName, "r");
	if (dest == NULL || res == NULL) return 0;	//If one of the files failed to be open, exit
	char c;
	while (fscanf(res, "%c", &c) != EOF)	//Read every char in res, if meets End Of File then stops
		fprintf(dest, "%c", c);	//Then output to dest
	fclose(dest);
	fclose(res);
	return 1;
}

int main(){
	char fileName1[20], fileName2[20];
	int flag;
	scanf("%s", fileName1);
	scanf("%s", fileName2);
	flag = fileCopy(fileName2, fileName1);
	if (flag == 1)
		printf("Success");
	else
		printf("Failure");
	return 0;
}
//Last modified time: 2018-05-17 23:01