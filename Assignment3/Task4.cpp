/*
Author: Michael
Date: 2018-05-06
Function: Sort several integers in descending order using sort() function
*/
#include<stdio.h>

void sort(int a[], int n){
	for (int i = 0; i < n - 1; ++i)	//Standard selection sort, here gets the i_th max value in this loop
		for (int j = i + 1; j < n; ++j)	//Compare a[i] with every number after a[i]
			if (a[i] < a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}

int main(){
	int a[20], n = 0;
	printf("Please input fewer than 20 integers to be sorted, ended with -1:\n");
	scanf("%d", &a[n]);
	while (a[n] != -1)	//Continue reading numbers if the last number is not -1
		scanf("%d", &a[++n]);
	sort(a, n);
	printf("The sorted numbers in descending order are:\n");
	for (int i = 0; i < n; ++i)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
//Last modified time: 2018-05-06 16:38