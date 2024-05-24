/*
 * Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number. For example, if the user enters 2784, then the program reports 21. If the user enters 59, then the program reports 14. The program should work for any number having one to ten digits.
 */
#include<stdio.h>
#include<stdlib.h>
int main(){
	long n;
	int sum = 0;
	printf("Enter a number: ");
	scanf("%ld", &n);
	while(n > 0){
		sum += n%10;
		n /= 10;
	}
	printf("Sum of digits : %d\n", sum);
	return EXIT_SUCCESS;
}
