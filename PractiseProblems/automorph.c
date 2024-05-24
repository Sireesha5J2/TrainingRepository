/*
 * C program to check if a number is an automorphic number (a number whose square ends in the same digits as the number itself).
Example:
Consider the number 76.
1. Calculate the square of the number:
      76*76=5776
2. Determine the number of digits in the original number:
	Number of digits in 76 is 2.
3. Therefore extract the last 2 digits from the square: (mod of 10 to the power 2)
       5776 mod 100 = 76
4. Compare the extracted digits with the original number:
	Extracted digits: 76
	Original number: 76
Since the extracted digits (76) match the original number (76), 76 is an automorphic number.
*/
#include <stdio.h>
#include<stdlib.h>
int main(){
	int n;
	printf("Enter the integer : ");
	scanf("%d", &n);
	int len = 0, dup;
	dup = n;
	while(dup > 0){
		len++;
		dup /= 10;
	}
	int divnum = 1;
	for(int i = 0; i < len; i++)
		divnum *= 10;
	int sq = n*n;
	if(sq%divnum == n)
		printf("It is automorphic\n");
	else
		printf("It is not automorphic\n");
	return EXIT_SUCCESS;
}
