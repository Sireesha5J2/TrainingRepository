/*
 * demonstration of command line arguments 
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	int n1, n2;
	char op;
	if(argc < 4){
		printf("Too few arguments\n");
		return EXIT_FAILURE;
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2][0];
	switch(op){
		case '+' : printf("Sum : %d\n", n1+n2);
			   break;
		case '-' : printf("Difference : %d\n", n1-n2);
			   break;
		case '*' : printf("Product : %d\n", n1*n2);
			   break;
		case '/' : printf("Div : %d\n", n1/n2);
			   break;
		case '%' : printf("Reminder : %d\n", n1%n2);
			   break;
		default : printf("Wrong operator");
	}
	return EXIT_SUCCESS;
}
