#include<stdio.h>

int x, y;

int main(){
	scanf("%d%d", &x, &y);
	printf("%d+%d=%d\n", x, y, x + y);
	printf("%d-%d=%d\n", x, y, x - y);
	printf("%d*%d=%d\n", x, y, x * y);
	if (y == 0)
		printf("Error while trying to calculate quotient and remainder!\n");
	else {
		printf("%d/%d=%d\n", x, y, x / y);
		printf("%d%%%d=%d\n", x, y, x % y);
	}
	return 0;
}