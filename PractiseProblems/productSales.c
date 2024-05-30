/*
 * Define a structure to hold the product sales information, structure will contain the product_ID and total_sales_amount. Write a program that accepts multiple product records (product_ID and total_sales_amount) and prints them in decreasing order of total_sales_amount. In case there are multiple records pertaining to the same product_id, the program should choose a single record containing the highest total_sales_amount.
The program should be capable of accepting a multi-line input.
Each subsequent line of input will contain a Product record, that is, a product_ID and total_sales_amount(separated by a hyphen). The output should consist of the combination of product_ID and corresponding total_sales_amount in decreasing order of score.
*/
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct Product{
	char PId[1024];
	int PQ;
}product;

void merge(product* arr, int low, int high, int mid){
	int i = low, n = mid+1, m = high+1, j = mid+1;
	product res[high-low+1];
        int k = 0;
	while(i < n && j < m){
		if((arr+i)->PQ >= (arr + j)->PQ){
			strcpy(res[k].PId, (arr + i)->PId);
			res[k++].PQ = (arr + i) -> PQ;
			i++;
		}
		else{
			strcpy(res[k].PId, (arr + j)->PId);
			res[k++].PQ = (arr + j) -> PQ;
			j++;
		}
	}
	while(i < n){
		strcpy(res[k].PId, (arr + i)->PId);
		res[k++].PQ = (arr + i) -> PQ;
		i++;
	}
	while(j < m){
		strcpy(res[k].PId, (arr + j)->PId);
		res[k++].PQ = (arr + j) -> PQ;
		j++;
	}
	for(int l = low; l <= high; l++){
		strcpy((arr + l) -> PId, res[l - low].PId);
		(arr + l) -> PQ = res[l-low].PQ;
	}
}

void mergeSort(product* arr, int low, int high){
	if(low >= high)
		return;
	int mid = (high + low)/2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);
	merge(arr, low, high, mid);
}


int main(){
	char input[1024];
    printf("Enter text. Press enter on a blank line to exit.\n");
    product P[50];
    int n = 0;
    while (1 == scanf("%1023[^\n]%*c", input)) {
	    char sep[] = "-";
	    char *pId = (char *)malloc(1024);
	    pId = strtok(input, sep);
	    int pQ = atoi(strtok(NULL, sep));
	    strcpy(P[n].PId, pId);
	    P[n++].PQ = pQ;
	    //printf("%s %d\n", pId, pQ);
	    // Process the input (e.g., print it)
        //printf("You entered: %s\n", input);
    }
    product Pdec[50];
    int k = 0;
    int whereToAdd[n];
    for(int i = 0; i < n; i++){
	    for(int j = 0; j < n; j++){
		    if(strcmp(P[i].PId, P[j].PId)== 0)
			    whereToAdd[i] = j;
	    }
    }
    for(int i = 0; i < n; i++){
	    if(whereToAdd[i] != i){
		    int q1, q2;
		    q1 = P[whereToAdd[i]].PQ;
		    q2 = P[i].PQ;
		    P[whereToAdd[i]].PQ = (q2 > q1) ? q2 : q1;
	    }
    }
    for(int i = 0; i < n; i++){
	    if(whereToAdd[i] == i){
		    strcpy(Pdec[k].PId, P[i].PId);
		    Pdec[k++].PQ = P[i].PQ;
	    }
    }
    mergeSort(Pdec, 0, k-1);
    for(int i =0 ; i < k; i++){
	    printf("%s %d\n", Pdec[i].PId, Pdec[i].PQ);
    }

    return EXIT_SUCCESS;
}
