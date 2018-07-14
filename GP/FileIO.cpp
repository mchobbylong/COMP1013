/*
Author: Yuepeng Long, Zhanming Tian, Zhengyang Li, Xiangying Wei
Date: 2018-05-27
Function: Group project - Bank Account Management System (Group 2) - Definition of File I/O Operations
*/
#include<stdio.h>
#include "Global.hpp"

bool loadFile(struct account accountArr[], int *N){
	FILE *inf = fopen("account.txt", "r");
	if (inf == NULL){
		puts("A fatal error occurs: Cannot open file 'account.txt'. Program halts.");
		return 0;
	}
	struct account temp;
    char ch;
	while (fscanf(inf, "%s%s%s%lf %c", temp.accountNo, temp.accountName, temp.Password, &temp.Balance, &ch) != EOF){
        temp.isVIP = (ch == 'V');
		accountArr[(*N)++] = temp;
    }
	fclose(inf);
	return 1;
}

void updateFile(struct account accountArr[], int N){
	FILE *outf = fopen("account.txt", "w");
	if (outf == NULL){
		puts("$$$ A fatal error occurs: Cannot save to file 'account.txt'.");
		printf("\n");
		return;
	}
	struct account temp;
    char ch;
	for (int i = 0; i < N; ++i){
		temp = accountArr[i];
        ch = (temp.isVIP) ? 'V' : 'N';
		fprintf(outf, "%s %s %s %lf %c\n", temp.accountNo, temp.accountName, temp.Password, temp.Balance, ch);
	}
	fclose(outf);
}

void flushbuff(){
	while (getchar() != '\n');
}