/*
 * Write a program to check if a given string is a palindrome or not.
 */
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter the string length : ");
	scanf("%d", &n);
	char s[n];
	printf("Enter the string : ");
	scanf("%s", s);
	for(int i = 0; i < n/2; i++){
		if(s[i] != s[n-i-1]){
			printf("Not a pallindrome\n");
			return EXIT_SUCCESS;
		}
	}
	printf("It is a pallindrome\n");
	return EXIT_SUCCESS;
}
