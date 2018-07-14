/*
Author: Yuepeng Long, Zhanming Tian, Zhengyang Li, Xiangying Wei
Date: 2018-05-27
Function: Group project - Bank Account Management System (Group 2) - Prototype of File I/O Operations
*/
#include<stdio.h>
#include "Global.hpp"

bool loadFile(struct account accountArr[], int *N);

void updateFile(struct account accountArr[], int N);

void flushbuff();