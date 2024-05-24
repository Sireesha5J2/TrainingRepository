
/*
 * Maximum of the array
 */
#include <stdio.h>
#include<stdlib.h>
#define SIZE 50
int main(){
	int arr[SIZE];
	int n;
	int max;
	printf("Enter the array size: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] > max)
			max = arr[i];
	}
	printf("Maximum element of the array : %d\n", max);
	return EXIT_SUCCESS;
}
