/*
Author: Michael
Date: 2018-05-24
Function: Find the max value and the min value in a serious of numbers
*/
#include<stdio.h>

void findmost(int a[], int n, int *max, int *min){
	if (!n){	//Special judge
		printf("There is no number in array!\n");
		return;
	}
	*max = a[0], *min = a[0];	//First set the current max value and min value to a[0]
	for (int i = 1; i < n; ++i){	//Looping variable i starts from 1, cause 0 is already used
		if (*max < a[i]) *max = a[i];	//Update the current most values while scanning the array
		if (*min > a[i]) *min = a[i];
	}
}

int main(){
	int n = 0, a[100], t;
	printf("Please input no more than 100 integers, ended with -1:\n");
	scanf("%d", &t);	//Read the first number
	while (t != -1 && n < 100){	//Check if the number is not -1, and there is enough space to store
		a[n++] = t;
		scanf("%d", &t);
	}
	int max, min;
	findmost(a, n, &max, &min);	//Sent the address of array a, and the numbers of data n to function findmost()
	printf("The max number is %d, the min value is %d.\n", max, min);
	return 0;
}
//Last modified time: 2018-05-19 16:22