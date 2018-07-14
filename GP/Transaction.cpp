/*
Author: Yuepeng Long, Zhanming Tian, Zhengyang Li, Xiangying Wei
Date: 2018-05-27
Function: Group project - Bank Account Management System (Group 2) - Definition of Transactions
*/
#include<stdio.h>
#include<string.h>
#include "Global.hpp"

bool findAccount(struct account accountArr[], int N, char *accountNo, char *Pwd, struct account *&uid){
	for (int i = 0; i < N; ++i)
		if (strcmp(accountNo, accountArr[i].accountNo) == 0 && (strcmp(Pwd, accountArr[i].Password) == 0 || strcmp(Pwd, "-1") == 0)){
			uid = &accountArr[i];
			return 1;
		}
	return 0;
}

bool withdraw(struct account *uid, double amount, char *info){
	if (uid->Balance < amount){
		sprintf(info, "Your balance is not enough to withdraw!");
		return 0;
	}
	int limit = (uid->isVIP) ? 3000 : 2000;
	if (limit < amount){
		sprintf(info, "The amount exceeds the limit (%d)!", limit);
		return 0;
	}
	uid->Balance -= amount;
	sprintf(info, "Successfully withdrawed! Now you have %.2lf in your account.", uid->Balance);
	return 1;
}

bool transfer(struct account *userA, struct account *userB, double amount, char *info){
	double amountT = amount * ((userA->isVIP) ? 1.005 : 1.01);
	if (userA->Balance < amountT){
		sprintf(info, "Your balance is not enough to transfer!");
		return 0;
	}
	int limit = (userA->isVIP) ? 20000 : 10000;
	if (limit < amount){
		sprintf(info, "The amount exceeds the limit (%d)!", limit);
		return 0;
	}
	userA->Balance -= amountT;
	userB->Balance += amountT;
	sprintf(info, "Successfully transfered! Now you have %.2lf in your account.", userA->Balance);
	return 1;
}