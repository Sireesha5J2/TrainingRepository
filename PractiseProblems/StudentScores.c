/*
 *Define a structure to hold student inventory information, including the product ID and quantity. Write a program that accepts multiple product records (product_ID and quantity) and prints the total quantity for each product in decreasing order of total quantity. In case there are multiple records for the same product, the program should sum up the quantities.
 */

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct Student{
	char SId[1024];
	int SQ;
	float avg;
	int occ;
}student;

int main(){
	char input[1024];
    printf("Enter text. Sress enter on a blank line to exit.\n");
    student S[50];
    int n = 0;
    while (1 == scanf("%1023[^\n]%*c", input)) {
	    char sep[] = "-";
	    char *sId = (char *)malloc(1024);
	    sId = strtok(input, sep);
	    int sQ = atoi(strtok(NULL, sep));
	    S[n].avg = 0;
	    S[n].occ = 0;
	    strcpy(S[n].SId, sId);
	    S[n++].SQ = sQ;
	    //printf("%s %d\n", sId, sQ);
	    // Srocess the input (e.g., print it)
        //printf("You entered: %s\n", input);
    }
    student Savg[50];
    int k = 0;
    int whereToAdd[n];
    for(int i = 0; i < n; i++){
	    for(int j = 0; j < i+1; j++){
		    if(strcmp(S[i].SId, S[j].SId)== 0){
			    whereToAdd[i] = j;
			    S[j].occ += 1;
			    break;
		    }
	    }
    }
    for(int i = 0; i < n; i++){
	    if(whereToAdd[i] != i){
		    S[whereToAdd[i]].SQ += S[i].SQ;
	    }
    }
    for(int i = 0; i < n; i++){
	    if(whereToAdd[i] == i){
		    S[i].avg = (float)S[i].SQ/S[i].occ;
		    Savg[k].avg = S[i].avg;
		    Savg[k].occ = S[i].occ;
		    strcpy(Savg[k].SId, S[i].SId);
		    Savg[k++].SQ = S[i].SQ;
	    }
    }
    //for(int i = 0; i < k; i++){
	//    printf("%s %d %f %d\n", S[i].SId, S[i].SQ, S[i].avg, S[i].occ);
    //}
    //mergeSort(Savg, 0, k-1);

    int maxAvgInd = 0;
    for(int i = 0; i < k; i++){
	    if(Savg[i].avg > Savg[maxAvgInd].avg){
		    maxAvgInd = i;
	    }
    }
    printf("Highest scored student details : %s %.2f\n\n", Savg[maxAvgInd].SId, Savg[maxAvgInd].avg);
   
    for(int i =0 ; i < k; i++){
	    printf("%s %.2f\n", Savg[i].SId, Savg[i].avg);
    }

    return EXIT_SUCCESS;
}
