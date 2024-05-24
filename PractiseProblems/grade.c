/*
 * Write a program that takes a score (0-100) as input from the user and uses if statements to determine the corresponding grade:
90-100: A
80-89: B
70-79: C
60-69: D
Below 60: F
Print the grade.
*/
#include<stdio.h>
int main(){
	int score;
	printf("Enter the score : ");
	scanf("%d", &score);
	char grade;
	if(score >= 90 && score <= 100){
		grade = 'A';
	}else if(score >= 80 && score < 90){
		grade = 'B';
	}else if(score >= 70 && score < 80){
		grade = 'C';
	}else if(score >= 60 && score < 70){
		grade = 'D';
	}else{
		grade = 'F';
	}
	printf("Grade of the student : %c\n", grade);
	return 0;
}
