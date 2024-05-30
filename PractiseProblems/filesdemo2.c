#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int copy_file(FILE* inFile, FILE* outFile){
	char file_char = '\0';
	char out_char = '\0';
	int ret = 0;
	while(1){
		if(feof(inFile) != 0)
			break;
		file_char = (char)fgetc(inFile);
		if(isalpha(file_char)){
			out_char = toupper(file_char);
			ret = fputc(out_char, outFile);
			if(ret == EOF)
				return 0;
		}
		else{
			ret = fputc(file_char, outFile);
			if(ret == EOF)
				return 0;
		}
	}
	return 1;
}	

int display_file(FILE* outFile){
	char file_char = '\0';
	while(1){
		if(feof(outFile) != 0)
			break;
		file_char = (char) getc(outFile);
		printf("%c", file_char);
	}
	printf("\n");
	return 1;
}

int main(){
	FILE *input = NULL, *output = NULL;
	int ret_val = 1;
	input = fopen("sample", "r");
	if(input == NULL){
		printf("Error in opening sample file\n");
		return EXIT_FAILURE;
	}
	output = fopen("sample1", "w");
	if(output == NULL){
		printf("Error in opening sample1 file\n");
		return EXIT_FAILURE;
	}
	ret_val = copy_file(input, output);
	if(ret_val == 0){
		printf("Error in copying files\n");
		return EXIT_FAILURE;
	}
	ret_val = fclose(input);
	if(ret_val != 0){
		printf("Error in closing the input file\n");
		return EXIT_FAILURE;
	}
	ret_val = fclose(output);
	if(ret_val != 0){
		printf("Error in closing the output file\n");
		return EXIT_FAILURE;
	}
	output = fopen("sample1", "r");
	if(output == NULL){
		printf("Error in opening output\n");
		return EXIT_FAILURE;
	}
	ret_val = display_file(output);;
	if(ret_val == 0){
		printf("Error in displaying output\n");
		return EXIT_FAILURE;
	}
	ret_val = fclose(output);
	if(ret_val != 0){
		printf("Error in closing the output file\n");
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
