#include <stdio.h>
#include <stdlib.h>
void merge(int* arr, int low, int high, int mid){
	int i = low, n = mid, m = high+1, j = mid;
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

int main(){
	int n = 5;
	int arr[] = {1, 4, 0, 3, 8};
	merge(arr, 0, 4, 2);
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return EXIT_SUCCESS;
}
