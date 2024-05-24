/*
 * To calculate Area and Circumference of a circle
 */
#include<stdio.h>
#define PI 3.14
int main(){
	float radius;
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);
	printf("Area of the circle : %f\n",PI * radius * radius);
	printf("Circumference of the circle : %f\n", 2 * PI * radius);	
	return 0;
}
