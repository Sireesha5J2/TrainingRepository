/*
 * Write a program that prompts the user for a positive integer and then reports the closest integer having a whole number square root. For example, if the user enters 8, then the program reports 9. If the user enters 18, then the program reports 16.The program should work  for any number having one to seven digits.
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;
	printf("Enter any integer: ");
	scanf("%d", &n);
	int low = 1, high = n, res1, res2;
	while(low <= high){
		int mid = (low+high)/2;
		if(mid*mid == n){
			printf("%d\n", mid);
			break;
		}else if(mid*mid < n){
			if((mid+1)*(mid+1) > n){
				res1 = mid+mid;
				res2 = (mid+1)*(mid+1);
				if(n-res1 < res2-n)
					printf("res = %d\n", res1);
				else
					printf("res = %d\n", res2);
				break;
			}
			else
				low = mid + 1;
		}
		else{
			if((mid-1)*(mid-1) < n){
				res1 = mid+mid;
				res2 = (mid-1)*(mid-1);
				if(n-res2 < res1-n)
					printf("res = %d\n", res1);
				else
					printf("res = %d\n", res2);
				break;
			}
			else
				high = mid - 1;
		}
	}

	return EXIT_SUCCESS;
}
