/*
 Write a program to perform simple arithmetic operation on two integers.
*/
#include<stdio.h>
int main(){
	int num1; //interger1
	int num2; //integer2
	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);
	printf("Sum of Integers: %d\n", num1 + num2);
	printf("Subtraction of Integers: %d\n", num1 - num2);
	printf("Product of Integers: %d\n", num1 * num2);
	printf("Division of Integers: %d\n", num1/num2);
	printf("Remainder of Integers on division: %d\n", num1 % num2);
	return 0;
}
