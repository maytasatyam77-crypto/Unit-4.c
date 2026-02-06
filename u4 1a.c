// 1a: Program to Write Data into a File
#include<stdio.h>
int main() {
	FILE*fp;
	fp = fopen("data.txt", "w");
	if (fp == NULL) {
		printf("file cannot be opened!\n");
		return 1;
	}
	fprintf(fp, "welcome to file handeling in c\n");
	fprintf(fp, "this text is written to the file.\n");
	fclose(fp);
	printf("data writen successfully.\n");
	return 0;
	}