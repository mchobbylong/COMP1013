/*
Author: Michael
Date: 2018-05-10
Function: Finish the program according to the requirements in the comments
*/
#include <stdio.h>
#include <string.h>
struct Student
{
	char str[10];
	int marks;
};
int main()
{
	int a[5] = {2, 4, 6, 8, 22};
	char str[10];
	char *p;
	int n = 0, i;
	struct Student stu[20];
	struct Student *ps;
	strcpy(str, "abcdefg");
	p = str;

	// print the second element in array a using three different expressions.
	int *pa = &a[1];
	printf("%d %d %d\n", a[1], *(a + 1), *pa);
	printf("%c %c\n", str[0], *p);   //print first char in str through str and p respectively
	printf("%s, %s\n", str, p); //print str string through str and p respectively
	for (i = 0; i < 20; i++)
	{
		scanf("%s %d", stu[i].str, &stu[i].marks); // read student's name and marks
		if (stu[i].marks == -1)
			break;
	}
	n = i - 1;
	// with the following two statements, print out the name and marks throught ps
	ps = stu;
	printf("first student\'s name:%s, marks:%d\n", ps -> str, ps -> marks);
	return 0;
}
//Last modified time: 2018-05-10 20:49