/*
Author: Michael
Date: 2018-04-20
Function: Find all perfect numbers under 1000
*/
#include<stdio.h>
int main(){
	printf("The perfect numbers under 1000 are: ");
	for (int n = 1; n < 1000; ++n){	//n is the number being checked
		int sum = 0;
		for (int i = 1; i < n; ++i)	//Check all positive integers under n
			if (n % i == 0) sum += i;
		if (n == sum) printf("%d ", n);
	}
	printf("\n");
	return 0;
}
//Last modified time: 2018-04-20 18:47