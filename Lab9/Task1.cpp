/*
Author: Michael
Date: 2018-05-03
Function: Find the max value in a array
*/
#include<stdio.h>

float getmax(float a[], int n);

int main(){
	float value[4] = {2.5, -4.75, 1.2, 3.67};	//Test value
	printf("The biggest element in the array is %f.\n", getmax(value, 4));	//getmax(int[], int) returns the max value in the array
	return 0;
}

float getmax(float a[], int n){
	float ret = a[0];	//"ret" means "return value". Here it is used to record the max value
	for (int i = 1; i < n; ++i)
		if (ret < a[i]) ret = a[i];
	return ret;
}
//Last modified time: 2018-05-03 21:30