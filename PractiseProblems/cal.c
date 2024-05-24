/*
 * Simple Calculator:
Write a program that takes two numbers and an operator (+, -, *, /) as input and uses if statements to perform the corresponding arithmetic operation. Print the result.
*/
#include <stdio.h>
int main(){
	int num1, num2;
	char op;
	printf("Enter two integers : ");
	scanf("%d %d", &num1, &num2);
	printf("Enter an operator (+, -, *, /, %): ");
	scanf(" %c", &op);
	switch(op){
		case '+' : printf("Sum : %d\n", num1 + num2); break; 
		case '-' : printf("Difference : %d\n", num1 - num2); break; 
		case '*' : printf("Product : %d\n", num1 * num2); break; 
		case '/' : printf("division : %d\n", num1 / num2); break; 
		case '%' : printf("Remainder : %d\n", num1 % num2); break;
		default : printf("Invalid operator"); 
	}
	return 0;
}
