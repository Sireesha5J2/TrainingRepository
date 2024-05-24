/*
 *Write a C program to determine whether a given positive integer is an Armstrong number. An Armstrong number (also known as a narcissistic number or pluperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits. Your program should:
 
i. Prompt the user to enter a positive integer.
ii. Determine the number of digits in the number.
iii. Calculate the sum of each digit raised to the power of the total number of digits.
iv Compare the calculated sum to the original number to determine if it is an Armstrong number.
v. Print "Armstrong number" if the number is an Armstrong number, otherwise print "Not an Armstrong number".
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n, dup;
	int len = 0;
	int sumOfDig = 0;
	printf("Enter any integer : ");
	scanf("%d", &n);
	dup = n;
	while(dup > 0){
		len++;
		dup /= 10;
	}
	dup = n;
	//printf("dup = %d, len = %d\n", dup, len);
	while(dup > 0){
		int dig = dup % 10;
		sumOfDig +=  (int)pow(dig, len);
		dup /= 10;
	}
	//printf("%d\n", sumOfDig);
	if(sumOfDig == n)
		printf("%d is an armstrong number\n", n);
	else
		printf("%d is not an armstrong number\n", n);
	return EXIT_SUCCESS;
}
