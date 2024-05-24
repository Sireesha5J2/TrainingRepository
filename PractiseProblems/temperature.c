/*
 * write a  C program that performs temperature conversions between Celsius to Fahrenheit.
 */
#include<stdio.h>
int main(){
	printf("Enter 'C' to convert celius to fahrenheit and 'F' for the opposite: ");
	char degree;
	scanf("%c", &degree);
	if(degree == 'C'){
		float c;
		printf("Enter the temperature: ");
		scanf("%f", &c);
		printf("Temperature in fahrenheit : %f\n", (c * 9 / 5)+32); 
	}
	else if(degree == 'F'){
		float f;
		printf("Enter the temperature: ");
		scanf("%f", &f);
		printf("Temperature in celcius : %f\n", (f - 32) * 5 / 9); 
	}
	else{
		printf("Invalid input\n");
	}
	return 0;
}
