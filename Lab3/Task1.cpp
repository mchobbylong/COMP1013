#include<stdio.h>
int main(){
	int percentage, x;
	char ch1, ch2;
	scanf("%d%c%c%d", &percentage, &ch1, &ch2, &x);
	printf("%d%% %c%c %d is %f\n", percentage, ch1, ch2, x, 1.0 * x * percentage / 100);
	return 0;
}

/*

Input1:
25of60

Result 1:
25% of 60 is 15.000000

Reason 1:
All four variables get correct values from input (scanf), therefore produce the right output.

Input 2:
25 of60

Result 2:
25%  o 41693790 is 10423447.500000

Input 3:
25 of 60

Result 3:
25%  o 40383070 is 10095767.500000

Reason 2 && 3:
Because space is a character, it will be given to the char-type variable ch1,
then ch2 gets 'o', finally x gets a character 'f', which occurs error and the 
exact value of x is not predictable.

*/