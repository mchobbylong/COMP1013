/*
Author: Michael
Date: 2018-04-14
Function: Verify Narcissistic number
*/
#include<stdio.h>

int main(){
	for (int n = 3; n <= 1000; n += 3){	//Scan all the multiple of 3 under 1000
		int t = n;
		while (t != 153){
			int T = 0;	//The next number will be stored in T
			while (t){
				int x = t % 10;
				T += x * x * x;
				t /= 10;
			}
			t = T;
		}
	}
	printf("All numbers that are multiple of 3 and under 1000 satisfy the theory.\n");
	return 0;
	/*
	If there exists one number that does not satisfy the theory,
	the program will run without stopping.
	*/
}
//Last modified time: 2018-04-14 23:36