/*
 * Write a program to reverse the order of words in a given string.
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverseWords(char*);
int main(){
	char s[100];
	printf("Enter the string : ");
	scanf("%[^\n]s", s);
        reverseWords(s);
	printf("%s\n", s);
	return EXIT_SUCCESS;
}

void reverseWords(char s[]){
	char *token;
        char sep[] = " ";
	token = strtok(s, sep);
	//printf("%s\n", token);
	char res[100];
	strcpy(res, token);
	while(token != NULL){
		
		token = strtok(NULL, " ");
		if(token == NULL)
			break;
	
		//printf("%s ", token);
		char tk[100];
		strcpy(tk, token);
		strcat(tk , sep);
		strcat(tk, res);
		strcpy(res, tk);
	}
	strcpy(s, res);
}
