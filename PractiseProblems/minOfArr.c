/*
 * Minimum of the array
 */
#include <stdio.h>
#include<stdlib.h>
#define SIZE 50
int main(){
	int arr[SIZE];
	int n;
	int min;
	printf("Enter the array size: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] < min)
			min = arr[i];
	}
	printf("Minimum element of the array : %d\n", min);
	return EXIT_SUCCESS;
}
