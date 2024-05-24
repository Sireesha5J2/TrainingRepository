/*
 *Given an array of positive integers. Your task is to find the leaders in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader.
 
TESTCASE 1:
Input:
6
6 7 4 3 5 2
Output:
2 5 7
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter the array size : ");
	scanf("%d", &n);
	int arr[n], maxr[n];
	printf("Enter the array elements: ");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	maxr[n-1] = arr[n-1];
	for(int i = n-2; i > -1; i--){
		if(arr[i] > maxr[i+1]){
			maxr[i] = arr[i];
		}else{
			maxr[i] = maxr[i+1];
		}
	}
	for(int i = 0; i < n; i++){
		if(maxr[i] == arr[i]){
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
	return EXIT_SUCCESS;
}
