/*
Author: Yuepeng Long, Zhanming Tian, Zhengyang Li, Xiangying Wei
Date: 2018-05-27
Function: Group project - Bank Account Management System (Group 2) - Prototype of Transactions
*/
#include<stdio.h>
#include "Global.hpp"

bool findAccount(struct account accountArr[], int N, char *accountNo, char *Pwd, struct account *&uid);

bool withdraw(struct account *uid, double amount, char *info);

bool transfer(struct account *userA, struct account *userB, double amount, char *info);