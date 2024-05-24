/*
 * Perform linear search on a one dimensional array
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
int main(){
	int arr[SIZE];
	int n, key, pos = -1;
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	printf("Enter the elements of the array : ");
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		printf("%d", arr[i]);
	}
	printf("Enter the key element to search : ");
	scanf("%d", &key);
	for(int i = 0; i < n; i++){
		if(arr[i] == key){
			pos = i;
			printf("Element found at index %d\n", pos);
			break;
		}
	}
	if(pos == -1)
		printf("Element not found\n");
	return EXIT_SUCCESS;
}
