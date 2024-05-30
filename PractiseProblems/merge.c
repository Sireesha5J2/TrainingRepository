/*
 * Write a program to merge two sorted arrays into a single sorted array.
 */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, m;
	printf("Enterr array sizes : ");
	scanf("%d %d", &n, &m);
	printf("Enter first array elements : ");
	int arr1[n], arr2[m];
	for(int i = 0; i < n; i++)
		scanf("%d", &arr1[i]);
	printf("Enter second array elements : ");
	for(int i = 0; i < m; i++){
		scanf("%d", &arr2[i]);
	}
	int i = 0, j = 0, k = 0;
	int res[n+m];
	while(i < n && j < m){
		if(arr1[i] <= arr2[j]){
			res[k++] = arr1[i++];
		}else{
			res[k++] = arr2[j++];
		}
	}
	while(i < n)
		res[k++] = arr1[i++];
	while(j < m)
		res[k++] = arr2[j++];
	for(int l = 0; l < k; l++)
		printf("%d ", res[l]);
	printf("\n");
	return EXIT_SUCCESS;
}
