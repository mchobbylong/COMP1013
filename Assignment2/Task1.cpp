/*
Author: Michael
Date: 2018-04-15
Function: Print a pattern as follows:
#*#*#*#*#*
#*#*#*#*
#*#*#*
#*#*
#*
#

*/
#include<stdio.h>

int main(){
	for (int i = 5; i; --i){	//Define i as the number of groups of "#*" in each row
		for (int j = 1; j <= i; ++j)
			printf("#*");
		printf("\n");	//Go to next line
	}
	printf("#\n");	//Print the last '#'
	return 0;
}
//Last modified time: 2018-04-15 00:00