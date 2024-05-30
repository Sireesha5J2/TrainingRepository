/*
 * Write a program to find all common elements in two given arrays.
 */
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n, m;
	printf("Enter the sizes of two arrays : ");
	scanf("%d %d", &n, &m);
	int arr1[n], arr2[m];
	printf("Enter the first array elements : ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	printf("Enter second array elements : ");
	for(int i =0 ; i < m; i++){
		scanf("%d", &arr2[i]);
	}
	for(int i = 0; i < n; i++){
		for(int j  = 0; j < m; j++){
			if(arr1[i] == arr2[j])
				printf("%d ", arr1[i]);
		}
	}
	printf("\n");
	return EXIT_SUCCESS;
}
