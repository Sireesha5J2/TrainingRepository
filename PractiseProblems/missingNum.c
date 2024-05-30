/*
 * Find the Missing Number in an Array:
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, write a program to find the missing number.
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the array size : ");
	scanf("%d", &n);
	int arr[n];
	int xorArr = 0;
	for(int i =0; i < n; i++){
		scanf("%d", &arr[i]);
		xorArr = xorArr ^ arr[i];
	}
	for(int i = 1; i <= n; i++)
		xorArr = xorArr ^ i;
	printf("Missing number is %d\n", xorArr);
	return EXIT_SUCCESS;
}
