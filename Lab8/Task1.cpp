/*
Author: Michael
Date: 2018-04-26
Function: Print out the following pattern
*******
******#
*****##
****###
***####
**#####
*######

*/
#include<stdio.h>
int main(){
	for (int i = 0; i < 7; ++i){	//The i_th row (i -> 0..6)
		for (int j = 0; j < 7 - i; ++j) printf("*");	//Has (7-i) '*'
		for (int j = 0; j < i; ++j) printf("#");	//Has (i) '#'
		printf("\n");
	}
}
//Last modified time: 2018-04-26 16:28