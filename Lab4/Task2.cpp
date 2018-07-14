#include<stdio.h>

int x, y;

int main(){
	scanf("%d%d", &x, &y);
	printf("%d\n", (x < y) ? x : y);
	return 0;
}