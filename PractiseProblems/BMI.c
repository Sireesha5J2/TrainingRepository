/*
 * BMI Calculator:
Write a program that calculates the Body Mass Index (BMI) based on user input for weight (in kg) and height (in meters). Use if statements to classify the BMI into categories:
Below 18.5: Underweight
18.5 to 24.9: Normal weight
25 to 29.9: Overweight
30 and above: Obesity
*/
#include<stdio.h>
int main(){
	float weight, height;
	printf("Enter your weight(kg): ");
	scanf("%f", &weight);
	printf("Enter your height(m): ");
	scanf("%f", &height);
	float BMI;
	BMI = (weight)/ (height * height);
	if(BMI < 18.5){
		printf("Underweight\n");
	}else if(BMI >= 18.5 && BMI <= 24.9){
		printf("Normal weight\n");
	}else if(BMI >= 25 && BMI <= 29.9){
		printf("Overweight\n");
	}
	else{
		printf("Obesity\n");
	}
	return 0;
}
