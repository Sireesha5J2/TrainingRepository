/*
 * Write a program to check if two strings are anagrams of each other.
 */
#include<stdio.h>
#include<stdlib.h>
int main(){
	int letterC1[26] = {0}, letterC2[26] = {0};
	int n;
	printf("Enter the string length : ");
	scanf("%d", &n);
	char s1[n], s2[n];
	printf("Enter the string1 : ");
	scanf("%s", s1);
	printf("Enter the string2 : ");
	scanf("%s", s2);
	for(int i = 0; i < n; i++){
		if(s1[i] >= 'A' && s1[i] <= 'Z')
			letterC1[s1[i]-65] += 1;
		else if(s1[i] >= 'a' && s1[i] <= 'z')
			letterC1[s1[i]-97] += 1;
	}
	for(int i = 0; i < n; i++){
		if(s2[i] >= 'A' && s2[i] <= 'Z')
			letterC2[s2[i]-65] += 1;
		else if(s2[i] >= 'a' && s2[i] <= 'z')
			letterC2[s2[i]-97] += 1;
	}
	for(int i = 0; i < 26; i++){
		if(letterC1[i] != letterC2[i]){
			printf("Not anagrams!\n");
			return EXIT_SUCCESS;
		}
	}
	printf("They are anagrams!\n");
	return EXIT_SUCCESS;
}
