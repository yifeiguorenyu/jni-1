#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mainen() {
	char * password = "123456"; //��������^����
	char*  filename = "F:\\abc.jpeg";
	char* fileencryname = "F:\\efg.jpeg";
	FILE * file = fopen(filename, "rb");
	FILE * encryfile = fopen(fileencryname, "wb");



	if (!file ||!encryfile) {
		printf("���ļ�ʧ��");
	}

	int c;
	int index=0;
	int index_len = strlen(password);
	while ((c=fgetc(file))!=EOF)
	{
		fputc(c^password[index%index_len], encryfile);
		index++;
	}







	fclose(file);
	fclose(encryfile);
	getchar();
}