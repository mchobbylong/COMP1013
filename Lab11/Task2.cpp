/*
Author: Michael
Date: 2018-05-17
Function: Answer questions
*/
#include <stdio.h>
#include <stdlib.h>
struct stuRec
{
	char name[20];
	int id;
	char gender;
};
int main()
{
	struct stuRec *p;
	p = (struct stuRec *)malloc(sizeof(struct stuRec));
	if (p)
	{
		printf("please input name, id and gender\n");
		scanf("%s%d%*c%c", p->name, &p->id, &p->gender);
		printf("name:%10s,ID:%d,gender:%c\n", p->name, p->id, p->gender);
		free(p);
	}
	return 0;
}
/*
Answers:
1. Define a struct, allocated memory dynamically, and store a student's info
2. Dynamically allocated
3. Skip a character while input
4. The name will be right-aligned, like this:
name:   Michael,ID:26075,gender:M
5. If a block of memory was allocated dynamically but not being free, it would leads to memory leak.
*/