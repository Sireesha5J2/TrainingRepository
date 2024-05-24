/*
 * Sum of array elements
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
int main(){
	int arr[SIZE];
	int n;
	int sum = 0;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("Sum of array elements are : %d\n", sum);
	return 0;
}
