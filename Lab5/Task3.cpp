/*
Author: Michael
Date: 2018-03-29
Function: Determine someone is fit or not, due to his height and weight
*/

#include<stdio.h>

int height, weight;

int main(){
	printf("Input height (cm): ");
	scanf("%d", &height);
	printf("Input weight (kilo): ");
	scanf("%d", &weight);
	if (height - 105 > weight + 20)
		printf("You are too slim\n");
	else if ((weight - 10 < height - 105) && (height - 105 <= weight + 20))
		printf("You are fit\n");
	else printf("You are too fat\n");
	return 0;
}