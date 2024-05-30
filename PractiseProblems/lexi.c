#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char s[] = "aeu";
	char t[] = "ape";
	printf("%d\n", strcmp(t, s));
	return EXIT_SUCCESS;
}
