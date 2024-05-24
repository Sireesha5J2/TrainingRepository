#include<stdio.h>
#include<math.h>
int main(){
	double n;
	printf("Enter any integer : ");
	scanf("%lf", &n);
	int n1 =(int)sqrt(n);
	int n2 = n1+1;
	if(n-(n1*n1) < (n2*n2)-n)
		printf("Result : %d\n", n1*n1);
	else
		printf("Result : %d\n", n2*n2);
	return 0;
}
