/*
Author: Michael
Date: 2018-04-19
Function: Read a sequence of positive integers and sort them in ascending order. Use -1 to indicate the end of numbers.
*/
#include<stdio.h>
int main(){
	int n = 0, a[200], t;	//Use temporary variable t to read numbers
	printf("Please input positive integers (use -1 to indicate the end): ");
	scanf("%d", &t);
	while (t != -1){	//If it is valid, then can be stored in the array and asked for next number
		a[n++] = t;
		scanf("%d", &t);	
	}
	for (int i = 0; i < n - 1; i++)	//Algorithm: Selection Sort (select No.i small number in each i loop
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[i]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	printf("The sorted numbers are: ");
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
//Last modified time: 2018-04-19 22:29