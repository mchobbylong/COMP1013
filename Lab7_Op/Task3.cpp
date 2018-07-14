/*
Author: Michael
Date: 2018-04-20
Function: Input year, month and date and output the sum_day which means the total days in this year until the input date
*/
#include<stdio.h>

const int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};	//Preset the number of days in each month

bool isLeap(int y){
	return (y % 4 == 0 && y % 100 > 0) || (y % 400 == 0);
}

int main(){
	int y, m, d;
	printf("Please input year, month and date: ");
	scanf("%d%d%d", &y, &m, &d);
	int ans = d;
	for (int i = 1; i < m; ++i){	//Scan those months before m
		ans += days[i];	//Use days[] to simplify the program
		if (i == 2 && isLeap(y)) ++ans; //Leap year
	}
	printf("The sum of days is %d.\n", ans);
	return 0;
}
//Last modified time: 2018-04-20 19:10