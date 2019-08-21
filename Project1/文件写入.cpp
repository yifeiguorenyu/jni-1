#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mainputs() {
	char * filename = "F:\\simple.txt";
	FILE *file = fopen(filename, "w");
	if (!file) {
		printf("文件打开失败");
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	char * str = "guorenyu is threee";
	fputs(str, file);
	fclose(file);
	getchar();
}