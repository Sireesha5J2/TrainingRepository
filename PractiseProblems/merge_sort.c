// merge sort
#include <stdio.h>
#include <stdlib.h>

void merge(int* arr, int low, int high, int mid){
	int i = low, n = mid+1, m = high+1, j = mid+1;
	int res[high-low+1], k = 0;
	while(i < n && j < m){
		if(*(arr + i ) <= *(arr + j)){
			res[k++] = *(arr + i);
			i++;
		}
		else{
			res[k++] = *(arr + j);
			j++;
		}
	}
	while(i < n){
		res[k++] = *(arr + i);
		i++;
	}
	while(j < m){
		res[k++] = *(arr + j);
		j++;
	}
	for(int l = low; l <= high; l++){
		*(arr + l) = res[l-low];
	}
}

void mergeSort(int* arr, int low, int high){
	if(low >= high)
		return;
	int mid = (high + low)/2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);
	merge(arr, low, high, mid);
}

int main(){
	int n;
	printf("Enter the array size : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter array elements : ");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	mergeSort(arr, 0, n-1);
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}

