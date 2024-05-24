/*
  Program to find the area of the circle
*/
#define PI 3.14 //preprocessors increase readability. 
#include<stdio.h>
int main(){
	float rad;
	float area;
	printf("Enter the radius of the circle : ");;
	scanf("%f", &rad);
	area = PI * rad * rad;
	printf("Area of the circle : %f\n", area);
	return 0;
}
