/*
Author: Michael
Date: 2018-05-11
Function: Find number of occurrences of str1 in str2 using two methods.
*/
#include<stdio.h>
#include<string.h>

int occurrence1(char *ps1, char *ps2){
	if (*ps2 == '\0') return 0;	//Define the exit of the recursion
	int cnt = 1;	//Assume that there is a occurrence start from *ps2
	for (int i = 0; *(ps1 + i) != '\0'; ++i)	//Scan all characters in *ps1
		if (*(ps1 + i) != *(ps2 + i)) cnt = 0;	//If not match then the assumption is wrong
	return cnt + occurrence1(ps1, ps2 + 1);	//Check the next position of *ps2
}

int occurrence2(char *ps1, char *ps2){
	int cnt = 0;
	for (; *ps2 != '\0'; ++ps2){	//Set ps2 as the possible start position of occurrence
		int t = 1;	//The same checking method as in function occurrence1()
		for (int i = 0; *(ps1 + i) != '\0'; ++i)
			if (*(ps1 + i) != *(ps2 + i)) t = 0;
		cnt += t;
	}
	return cnt;
}

int main(){
	char str1[20], str2[80];
	scanf("%s%s", str1, str2);
	printf("%d\n", occurrence1(str1, str2));
	printf("%d\n", occurrence2(str1, str2));
	return 0;
}
//Last modified time: 2018-05-11 20:55