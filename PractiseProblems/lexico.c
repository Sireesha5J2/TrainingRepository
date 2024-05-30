
// merge sort
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void merge(char arr[][1024], int low, int high, int mid){
	int i = low, n = mid+1, m = high+1, j = mid+1;
	char res[high-low+1][1024];
        int k = 0;
	while(i < n && j < m){
		if(strcmp(arr[i], arr[j]) <= 0){
			strcpy(res[k++], arr[i]);
			i++;
		}
		else{
			strcpy(res[k++], arr[j]);
			j++;
		}
	}
	while(i < n){
		strcpy(res[k++], arr[i]);
		i++;
	}
	while(j < m){
		strcpy(res[k++], arr[j]);
		j++;
	}
	for(int l = low; l <= high; l++){
		strcpy(arr[l], res[l-low]);
	}
}

void mergeSort(char arr[][1024], int low, int high){
	if(low >= high)
		return;
	int mid = (high + low)/2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);
	merge(arr, low, high, mid);
}

int main(){
	int n;
	printf("Enter the no.of words : ");
	scanf("%d", &n);
	char words[n][1024];
	printf("Enter words : ");
	for(int i = 0; i < n; i++)
		scanf("%s", words[i]);
	mergeSort(words, 0, n-1);
	for(int i = 0; i < n; i++){
		printf("%s ", words[i]);
	}
	printf("\n");
	return EXIT_SUCCESS;
}

