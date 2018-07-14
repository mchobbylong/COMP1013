/*
Author: Michael
Date: 2018-05-10
Function: Read students' information and sort according to the names in ascending order
*/
#include<stdio.h>
#include<string.h>

int main(){
	struct student{	//Define a new structure to store student's information
		char name[50];
		int score;
		char major[4];
	};
	struct student a[50];
	char Name[50];
	int n = 0;	//Start storing student's information from a[0]

	printf("Please input a student's name (input 'End' if you want to stop reading): ");
	scanf("%s", Name);	//Read the first name string for the first time of while
	while (strcmp(Name, "End") != 0 && n < 50){	//If input "End" or there is no space in a, then exit
		strcpy(a[n].name, Name);	//Store the name, then ask for input the score and major
		printf("Please input a student's score: ");
		scanf("%d", &a[n].score);
		printf("Please input a student's major (within 3 letters): ");
		scanf("%s", a[n].major);
		++n;	//Move n to next position, promise that a[n] is empty
		printf("\nPlease input a student's name: (input 'End' if you want to stop reading): ");
		scanf("%s", Name);	//Read the next name
	}

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n - i - 1; ++j)	//Standard bubble sort
			if (strcmp(a[j].name, a[j + 1].name) > 0){	//Equals to if (a[j].name > a[j+1].name)
				struct student temp;	//Swap a[j] and a[j+1]
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
	printf("\nThe sorted information is: \n");
	for (int i = 0; i < n; ++i)
		printf("%s\t\t%d\t%s\n", a[i].name, a[i].score, a[i].major);
	return 0;
}
//Last modified time: 2018-05-10 20:48