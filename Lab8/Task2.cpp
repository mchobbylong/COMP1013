/*
Author: Michael
Date: 2018-04-26
Function: Output the number of the character 'a' in the input sentence.
*/
#include<stdio.h>
int main(){
	int num = 0;	//Use variable num to count 'a'
	char ch;
	printf("Please input a string: \n");
	scanf("%c", &ch);	//Give the initial value of ch
	while (ch != '\n'){	//Loop if this character is not '\n'
		num += (ch == 'a');	//Implicit conversion, turns bool into int.
		scanf("%c", &ch);	//Continue reading ch
	}
	printf("The number of character 'a' is %d.\n", num);
	return 0;
}
//Last modified time: 2018-04-26 16:42