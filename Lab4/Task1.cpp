#include <stdio.h>
int main ()
{
	int x = 30, y = 30, z = 40;
	int temp1, temp2;

	temp1 = x / ++y + z / y;
	printf("temp1= %3d\ty= %d\n", temp1, y);
	temp1 = x / ++y + z / y;
	printf("temp1= %3d\ty= %d\n", temp1, y);
	y = 30;

	temp2 = x / y++ + z / y;
	printf("temp2= %3d\ty= %d\n", temp2, y);
	return 0;
}

/*

Output:
temp1=   1      y= 31
temp1=   1      y= 32
temp2=   2      y= 31

Explaination of %3d:
Print an integer in at least 3 letter spaces.
If there are fewer than 3 digits, add some space characters to fill the required spacing.

*/