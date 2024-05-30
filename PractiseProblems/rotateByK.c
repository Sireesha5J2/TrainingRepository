/*
 * Write a program to rotate an array of n elements to the right by k steps.
 */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the array size : ");
	scanf("%d", &n);
	int k, arr[n], res[n];
	printf("Enter the array elements: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter K value : ");
	scanf("%d", &k);
	for(int i = 0; i < n; i++){
		res[(i + k)% n] = arr[i];
	}
	for(int i = 0; i < n; i++)
		printf("%d ", res[i]);
	printf("\n");
	return EXIT_SUCCESS;
}
