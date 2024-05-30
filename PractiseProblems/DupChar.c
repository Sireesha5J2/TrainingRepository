/*
 *Write a program to remove duplicate characters from a string.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int Cap[26] = {0};
	int Sml[26] = {0};
	char s[50], res[50] = "";
	printf("Enter any string : ");
	scanf("%[^\n]s", s);
	int i = 0;
	while(s[i] != '\0'){
		char temp[2];
		if(s[i] >= 'A' && s[i] <= 'Z'){
			if(Cap[s[i]-65] == 0){
				Cap[s[i]-65] = 1;
				temp[0] = s[i];
				temp[1] = '\0';
				strcat(res, temp);
			}
		} 
		else if(s[i] >= 'a' && s[i] <= 'z'){
			if(Sml[s[i]-97] == 0){
				Sml[s[i]-97] = 1;
				temp[0] = s[i];
				temp[1] = '\0';
				strcat(res, temp);
			}
		}
	       i += 1;	
	}
	printf("%s\n", res);
	return EXIT_SUCCESS;
}
