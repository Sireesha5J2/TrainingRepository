/*
 * Remove the duplicate elements in the given array of intergers

i/p
1 2 3 4 2 5 1

o/p

1 2 3 4 5
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("Enter the size of the array : ");
	scanf("%d", &n);
	int arr[n], a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int j = 0;
	for(int i = 0; i < n; i++){
		int flag = 0;
		for(int k = 0; k < j; k++){
			if(a[k] == arr[i]){
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			a[j++] = arr[i];
	}
	for(int i = 0; i < j; i++)
		printf("%d ", a[i]);
	printf("\n");
	return EXIT_SUCCESS;
}
