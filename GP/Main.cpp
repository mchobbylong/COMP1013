/*
Author: Yuepeng Long, Zhanming Tian, Zhengyang Li, Xiangying Wei
Date: 2018-05-27
Function: Group project - Bank Account Management System (Group 2) - Main Body & UI
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Global.hpp"	// Including the define of the struct account
#include "FileIO.hpp"	// File Input/Output Operation
#include "Transaction.hpp"	// Withdraw, Transfer, and findAccount.

int Menu(){
	printf("\tPlease choose an operation:\n\n");
	printf("\t\t1. Withdraw from an account\n\n");
	printf("\t\t2. Save an amount to an account\n\n");
	printf("\t\t3. Transfer from one account to another\n\n");
	printf("\t\t4. Inquire the balance of an account\n\n");
	printf("\t\t5. Exit\n\n");
	int ch;
	printf("\tInput your choice: ");
	while (!scanf("%d", &ch) || ch < 1 || ch > 5){	// Error correction
		printf("\n\tWrong input!\n\n");
		flushbuff();	// Clear the invalid input in this line after scanf
		printf("\tInput your choice: ");
	}
	printf("\n");
	return ch;
}

void withdrawUI(struct account accountArr[], int N){
	char accountNo[strMax], Pwd[strMax], temp[strMax];
	double amount;
	struct account *uid;
	printf("\tPlease input your account number and password, seperated with a space: ");
	scanf("%s%s", accountNo, Pwd);
	flushbuff();
	printf("\n");
	while (!findAccount(accountArr, N, accountNo, Pwd, uid)){	// If cannot find the account then retry
		printf("\tWrong input or account number and password do not match!\n\n");
		printf("\tPlease input your account number and password, seperated with a space: ");
		scanf("%s%s", accountNo, Pwd);
		flushbuff();
		printf("\n");
	}
	printf("\tWelcome, %s! You have %.2lf in your account. \n\n", uid->accountName, uid->Balance);
	while (1){
		printf("\tPlease input the amount number you want to withdraw: ");
		while (!scanf("%lf", &amount) || amount <= 0){	// If get a wrong or invalid input number, then retry
			printf("\n\tNot a positive number!\n\n");
			flushbuff();
			printf("\tPlease input the amount number you want to withdraw: ");
		}
		flushbuff();
		printf("\n\tAre you sure to withdraw %.2lf?\n", amount, uid->accountName);
		printf("\tInput only 'Y' or 'y' as confirm, or others as reject (default): ");
		gets(temp);
		printf("\n");
		char infostr[100];
		if (strlen(temp) == 1 && (temp[0] == 'Y' || temp[0] == 'y')){	// Make confirmation
			bool flag = withdraw(uid, amount, infostr);
			printf("\t%s\n\n", infostr);
			if (flag){	// If withdraw success, then update the file and break out the loop
				updateFile(accountArr, N);
				break;
			}
		}
		else {
			printf("\tWithdrawing is cancelled.\n\n");
			break;
		}
	}
}

void saveUI(struct account accountArr[], int N){
	char accountNo[strMax], temp[strMax];
	double amount;
	struct account *uid;
	printf("\tPlease input your account number and the amount number, seperated with a space: ");
	int flag = scanf("%s%lf", accountNo, &amount);
	flushbuff();
	printf("\n");
	while (flag < 2 || amount <= 0 || !findAccount(accountArr, N, accountNo, "-1", uid)){	// Error correction
		printf("\tWrong input or cannot find the account!\n\n");
		printf("\tPlease input your account number and the amount number, seperated with a space: ");
		flag = scanf("%s%lf", accountNo, &amount);
		flushbuff();
		printf("\n");
	}
	printf("\tAre you sure to save %.2lf in the account named '%s'?\n", amount, uid->accountName);	// Make confirmation
	printf("\tInput only 'Y' or 'y' as confirm, or others as reject (default): ");
	gets(temp);
	printf("\n");
	char infostr[100];
	if (strlen(temp) == 1 && (temp[0] == 'Y' || temp[0] == 'y')){
		uid->Balance += amount;
		updateFile(accountArr, N);
		sprintf(infostr, "Successfully saved! Now you have %.2lf in your account.", uid->Balance);
	}
	else strcpy(infostr, "Saving is cancelled.");
	printf("\t%s\n\n", infostr);
}

void transferUI(struct account accountArr[], int N){
	char accountNo[strMax], Pwd[strMax], destNo[strMax], temp[strMax];
	double amount;
	struct account *userA, *userB;
	printf("\tPlease input your account number and password, seperated with a space: ");
	scanf("%s%s", accountNo, Pwd);
	flushbuff();
	printf("\n");
	while (!findAccount(accountArr, N, accountNo, Pwd, userA)){	// Error correction
		printf("\tWrong input or account number and password do not match!\n\n");
		printf("\tPlease input your accoount number and password, seperated with a space: ");
		scanf("%s%s", accountNo, Pwd);
		flushbuff();
		printf("\n");
	}
		printf("\tWelcome, %s! You have %.2lf in your account. \n\n", userA->accountName, userA->Balance);
	printf("\tPlease input the destination account number and the amount number you want to transfer, seperated with a space: ");
	while (scanf("%s%lf", destNo, &amount) < 2 || amount <= 0 || !findAccount(accountArr, N, destNo, "-1", userB)){	// Error correction
		printf("\n\tWrong format or account number does not find!\n\n");
		flushbuff();
		printf("\tPlease input the destination account number and the amount number you want to transfer, seperated with a space: ");
	}
	flushbuff();
	printf("\n\tAre you sure to transfer %.2lf to '%s'?\n", amount, userB->accountName);
	printf("\tInput only 'Y' or 'y' as confirm, or others as reject (default): ");	// Make confirmation
	gets(temp);
	printf("\n");
	char infostr[100];
	if (strlen(temp) == 1 && (temp[0] == 'Y' || temp[0] == 'y')){
		if (transfer(userA, userB, amount, infostr))
			updateFile(accountArr, N);
	}
	else strcpy(infostr, "Transfering is cancelled.");
	printf("\t%s\n\n", infostr);
}

void inquireUI(struct account accountArr[], int N){
	char accountNo[strMax], Pwd[strMax];
	struct account *uid;
	printf("\tPlease input your account number and password, seperated with a space: ");
	scanf("%s%s", accountNo, Pwd);
	flushbuff();
	printf("\n");
	while (!findAccount(accountArr, N, accountNo, Pwd, uid)){	// Error corection
		printf("\tWrong input or account number and password do not match!\n\n");
		printf("\tPlease input your account number and password, seperated with a space: ");
		scanf("%s%s", accountNo, Pwd);
		flushbuff();
		printf("\n");
	}
	printf("\tWelcome, %s! You have %.2lf in your account.\n\n", uid->accountName, uid->Balance);
}

int main(){
	struct account accountArr[50];	// The two important variables: the array stored the accounts, and total number N.
	int N = 0;
	if (!loadFile(accountArr, &N)) return 0;
	puts(horizenLine);
	puts("\tWelcome to the Bank Account Management System (BAMS)!\n");
	puts(horizenLine);
	while (1){
		switch (Menu()){
			case 1:
				withdrawUI(accountArr, N);
				break;
			case 2:
				saveUI(accountArr, N);
				break;
			case 3:
				transferUI(accountArr, N);
				break;
			case 4:
				inquireUI(accountArr, N);
				break;
			case 5:
				return 0;
		}
		puts(horizenLine);
	}
}