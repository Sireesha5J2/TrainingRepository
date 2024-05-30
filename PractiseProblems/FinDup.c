/*
 *Given an array of integers, write a program to find all duplicate elements in the array.
 */
#include <stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter the array size : ");
	scanf("%d", &n);
	int arr[n];
	int max;
	printf("Enter the array elements : ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for(int i = 0; i < n; i++){
		if(max < arr[i])
			max = arr[i];
	}
	int flag[max+1];
	for(int i = 0; i < max+1; i++)
		flag[i] = 0;
	for(int i = 0; i < n; i++){
		if(flag[arr[i]] == 0)
			flag[arr[i]] = 1;
		else
			printf("%d ", arr[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}
