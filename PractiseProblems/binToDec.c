/*
 * Write a program to convert Binary to decimal
 */
#include<stdio.h>
int main(){
	long long binN;
	printf("Enter the binary number : ");
	scanf("%lld", &binN);
	int factor = 1;
	int dec = 0;
	while(binN > 0){
		dec += (binN%10)*factor;
		factor *= 2;
		binN /= 10;
	}
	printf("Decimal number : %d\n", dec);
	return 0;
}
