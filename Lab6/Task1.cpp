/*
Author: Michael
Date: 2018-04-12
Function: Transfer student's GPA grade to GPA point.
*/
#include<stdio.h>

char ch;

int main(){
	printf("Please input a GPA grade letter: ");
	scanf("%c", &ch);
	int ans;	//Use an integer variable to store the result
	switch (ch){
		case 'A':
		case 'a':	//Two continous "case" sentences refer to a same situation
			ans = 4;
			break;
		case 'B':
		case 'b':
			ans = 3;
			break;
		case 'C':
		case 'c':
			ans = 2;
			break;
		case 'D':
		case 'd':
			ans = 1;
			break;
		case 'F':
		case 'f':
			ans = 0;
			break;
		default:
			ans = -1;	//Use -1 to indicate an invalid input
			break;
	}
	if (ans < 0) printf("You've input an invalid grade letter!\n");
	else printf("Your GPA is %d.00.\n", ans);
	return 0;
}
//Last change: 2018-04-12 17:02