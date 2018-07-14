#include<stdio.h>

int a, b;

int main(){
	printf("Please input two integers (a and b) to do the divisions:\n");
	scanf("%d%d", &a, &b);
	printf("Integer divided by: %d/%d=%d\n", a, b, a / b);
	printf("Float divided by: %d/%d=%.2f\n", a, b, (float)a / b);
	return 0;
}
