/*
 * program to find largest of three numbers
 */
#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("Enter three integers : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	if(num1 > num2){
		if(num3 > num1){
			printf("%d is the largest of three\n", num3);
		}else{
			printf("%d is the largest of three\n", num1);
		}
	}
	else{
		if(num2 > num3){	
			printf("%d is the largest of three\n", num2);
		}else{
			printf("%d is the largest of three\n", num3);
		}
	}
	return 0;
}
