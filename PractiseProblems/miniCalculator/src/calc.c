#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1, num2;
	char op;
	printf("Enter two integers : ");
	scanf("%d %d", &num1, &num2);
	printf("Enter an operator: ");
	scanf(" %c", &op);
	switch(op){
		case '+' : add(num1, num2); 
			   break;
		case '-' : sub(num1, num2);
			   break;
		case '*' : prod(num1, num2);
			   break;
		case '/' : div(num1, num2);
			   break;
		case '%' : rem(num1, num2);
			   break;
		default : printf("Wrong Operator/n");
	}
	return EXIT_SUCCESS;
}
