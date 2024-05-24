/*
 * Reverse the given array
 */
#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
int main(){
	int arr[SIZE];
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n/2; i++){
		arr[i] = arr[i]+arr[n-i-1];
		arr[n-i-1] = arr[i] - arr[n-i-1];
		arr[i] = arr[i] - arr[n-i-1];
	}
	for(int i = 0; i < n; i++)
		printf("%d  ", arr[i]);
	return EXIT_SUCCESS;
}
