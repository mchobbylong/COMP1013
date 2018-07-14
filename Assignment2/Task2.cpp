/*
Author: Michael
Date: 2018-04-15
Function: Decide if an input natural number is a prime number
*/
#include<stdio.h>
#include<math.h>	//For using sqrt()

int main(){
	int n;
	printf("Input a natural number: ");
	scanf("%d", &n);
	bool isPrime = (n != 1 && n != 0);	//If n is 1 or 0 then n is absolutely not a prime number, otherwise assume n is a prime number
	for (int i = 2; i <= sqrt(n); ++i)	//Scan all natural number between 2 and sqrt(n). Set the upper limit to sqrt(n) to save time
		if (n % i == 0){	//If n can be divided by i
			isPrime = 0;
			break;	//To save time
		}
	if (isPrime)
		printf("%d is a prime number.\n", n);
	else
		printf("%d is not a prime number. \n", n);
}
//Last modified time: 2018-04-15 20:23