/*
Author: Michael
Date: 2018-05-24
Function: Sort a group of students according to scores. Read data in a file, and write results into another file.
*/
#include<stdio.h>

typedef struct{	//Global structure, use "typedef" to define it as a new type of variable
	char name[20];
	int score;
} student;

void sort(student a[], int n){
	student t;	//Temporary variable for swapping
	for (int i = 0; i < n - 1; ++i)	//Standard selection sort
		for (int j = i + 1; j < n; ++j)
			if (a[i].score < a[j].score){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
}

int main(){
	FILE *inF = fopen("student.txt", "r"), *outF = fopen("sorted.txt", "w");	//Try to open files first, if failed then exit
	if (inF == NULL || outF == NULL){
		printf("Failed to open files!\n");
		return 0;
	}
	student a[20];
	int n = 0;
	while (fscanf(inF, "%s%d", a[n].name, &a[n].score) != EOF) n++;	//Continously scan student's information until meets EOF
	fclose(inF);	//Close the input file when it becomes useless
	sort(a, n);	//Call sort(a[], n) to sort the front n elements in array a according to scores
	for (int i = 0; i < n; ++i)
		fprintf(outF, "%s %d\n", a[i].name, a[i].score);
	fclose(outF);
	printf("Succeed!\n");
	return 0;
}
//Last modified time: 2018-05-24 16:24