/*
Author: Michael
Date: 2018-04-20
Function: Use two cpp files and a hpp file to complete Task3 in Lab7
*/
#include<stdio.h>

int compareASCIICode(char x, char y){
	if (x > y) return 1;
	if (x < y) return -1;
	return 0;
}