/*
Author: Yuepeng Long, Zhanming Tian, Zhengyang Li, Xiangying Wei
Date: 2018-05-27
Function: Group project - Bank Account Management System (Group 2) - Global Definition
*/
#ifndef GLOBAL_HPP	//Use to avoid redefinition
#define GLOBAL_HPP

#include<stdio.h>

const int strMax = 30;
const char horizenLine[] = "======================================================================\n";

struct account{
	char accountNo[strMax];
	char accountName[strMax];
	char Password[strMax];
	double Balance;
	bool isVIP;
};

#endif