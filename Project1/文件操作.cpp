#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int mainff() {
	char * filename = "F:\\simple.txt";
	FILE *file = fopen(filename, "r");
	if (!file) {
		printf("�ļ���ʧ��");
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	char buffer[10];
	while (fgets(buffer, 10, file))
	{

		printf("%s", buffer);
	}
	
	fclose(file);
	getchar();
}