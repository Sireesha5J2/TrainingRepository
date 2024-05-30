#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int copy_file(FILE* filein, FILE* fileout){
	char file_char = '\0', out_char = '\0';
	int ret = 0;
	while(1){
		if(feof(filein) != 0){
			break;
		}
		file_char = (char)fgetc(filein);
		if(isalpha(file_char)){
			out_char = toupper(file_char);
			ret = fputc(out_char, fileout);
			if(ret == EOF){
				return 0;
			}
		}
		else{
			ret = fputc(file_char, fileout);
			if(ret == EOF)
				return 0;
		}
	}
	return 1;
}

int display_file(FILE *fileout){
	char file_char;
	file_char = '\0';
	while(1){
		if(feof(fileout) != 0)
			break;
		file_char = (char)fgetc(fileout);
		printf("%c", file_char);
	}
	printf("\n");
	return 1;
}

int main(){
	FILE *input, *output;
	int ret_value;
	input = fopen("sample", "r");
	if(input == NULL){
		printf("Error in opening the sample file\n");
		return EXIT_FAILURE;
	}
	output = fopen("sample1", "w");
	if(output == NULL){
		printf("Error in opening the output file\n");
		return EXIT_FAILURE;
	}
	ret_value = copy_file(input, output);
	if(ret_value == 0){
		printf("Error in copying the file\n");
		return EXIT_FAILURE;
	}
	ret_value = fclose(input);
	if(ret_value != 0){
		printf("Error in closing output file\n");
		return EXIT_FAILURE;
	}
	ret_value = fclose(output);
	if(ret_value != 0){
		printf("Error in closing input file\n");
		return EXIT_FAILURE;
	}
	output = fopen("sample1", "r");
	if(output == NULL){
		printf("Error in opening sample1 file\n");
		return EXIT_SUCCESS;
	}
	ret_value = display_file(output);
	if(ret_value == 0){
		printf("Error in displaying the output\n");
		return EXIT_SUCCESS;
	}
	return EXIT_SUCCESS;
}
