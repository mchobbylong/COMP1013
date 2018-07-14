/*
Author: Michael
Date: 2018-05-10
Function: Give the following assignments and calculate the length of the line and the circumference of the triangle
*/
#include<stdio.h>
#include<math.h>

typedef struct{
	double x, y;
} point;

typedef struct{
	point u, v;
} line;

typedef struct{
	point p1, p2, p3;
} triangle;

double sqr(double v){
	return v * v;
}

double dist(point u, point v){	//Define a function to calculate the distance between two 'point'
	return sqrt(sqr(u.x - v.x) + sqr(u.y - v.y));
}

int main(){
	point P;	//Initialize a point
	P = {4, 11};
	
	line L;		//Initialize a line
	L.u = {2, 7};
	L.v = {10, 9};

	triangle T;	//Initialize a triangle
	T.p1 = {6, 5};
	T.p2 = {2, 0};
	T.p3 = {8, 3};
	
	printf("The point P is (%.1f, %.1f)\n", P.x, P.y);
	printf("The length of line L is %lf\n", dist(L.u, L.v));	//Use dist() to calculate
	printf("The circumference of triangle T is %lf\n", dist(T.p1, T.p2) + dist(T.p1, T.p3) + dist(T.p2, T.p3));
	return 0;
}
//Last modified time: 2018-05-10 20:44