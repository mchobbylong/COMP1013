/*
Author: Michael
Date: 2018-05-04
Function: Sort all integers in descending order to ascending order
*/
#include<stdio.h>

void sort(int a[], int n){
	for (int i = 0; i < n / 2; ++i){	//Just reverse the array
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}

int main(){
	int num[50], n;
	printf("Input a positive integer n, then n integers in descending order:\n");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
		scanf("%d", &num[i]);
	sort(num, n);
	for (int i = 0; i < n; ++i)
		printf("%d ", num[i]);
	printf("\n");
	return 0;
}
//Last modified time: 2018-05-04 01:10