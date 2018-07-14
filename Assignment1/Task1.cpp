/*
Author: Michael
Date: 20180401
Function: Task1 in Assignment1
*/
#include<stdio.h>

int main()
{
	int i = 0, j = 5;
	char ch;
	scanf("%c", &ch);
	printf("%d is the ASCII code of '%c'\n", ch, ch);
	printf("the value of i is %d\n", i);
	i = ch;
	printf("the value of i is %d\n", i);
	return 0;
}

/*

There were several errors:
1. Lack of preprocessor (header file)
2. Lack of type definition of the main function
3. Not an address of a variable written in function 'scanf' (lack of '&')
4. Lack of initial value of variable i.
5. No return an exitcode (optional)

There was one warning:
Not used variable f.
(Define the variable f but never use)

*/