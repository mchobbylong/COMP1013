/*
Author: Michael
Date: 2018-04-14
Function: Verify Goldbach conjecture under 100.
*/
#include<stdio.h>

int main(){
	for (int n = 2; n <= 100; n += 2){	//Scan all the even numbers under 100
		bool noAns = 1;	//Set a bool to check whether n does not satisfy the conjecture
		for (int x = 2; x <= n / 2; ++x){	//Scan all numbers that may become one of the two prime numbers
			int y = n - x;	//Calculate the other number
			bool isPrime = 1;	//Set a bool to verify x and y whether they are prime numbers
			for (int i = 2; i < x; ++i)
				isPrime = isPrime && (x % i);
			for (int i = 2; i < y; ++i)
				isPrime = isPrime && (y % i);
			if (isPrime){	//Find a equation for n
				printf("%d=%d+%d\n", n, x, y);
				noAns = 0;
				break;
			}
		}
		if (noAns)	//There is no possible pair of numbers for n
			printf("There exists an even number %d which cannot be the sum of two prime numbers.\n", n);
	}
	return 0;
}
//Last modified time: 2018-04-14 23:20