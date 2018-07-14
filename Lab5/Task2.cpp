/*
Author: Michael
Date: 2018-03-29
Function: Convert an amount of US dollars to Euro or RMB
*/

#include<stdio.h>

float n;
int x;

int main(){
	printf("Input an amount of US dollars: ");
	scanf("%f", &n);
	printf("Which currency do you want to convert to? (1-Euro, 2-RMB): ");
	scanf("%d", &x);
	if (x == 1) printf("%.2f US dollars = %.2f Euro.\n", n, n * 0.88);
	else printf("%.2f US dollars = %.2f RMB.\n", n, n * 6.7);
	return 0;
}