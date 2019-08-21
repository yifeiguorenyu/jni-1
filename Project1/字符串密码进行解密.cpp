#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
	char * password = "123456"; //轮流进行^操作

	char* fileencryname = "F:\\efg.jpeg";
	char*filedecryname = "F:\\new.jpeg";
	FILE * file = fopen(fileencryname, "rb");
	FILE * newFile = fopen(filedecryname, "wb");

	if (!fileencryname||!filedecryname) {
		printf("打开失败");
	}
	int c;
	int index = 0;
	int pass_len = strlen(password);
	while ((c=fgetc(file))!=EOF)
	{
		fputc(c^password[index%pass_len], newFile);
		index++;
	}



	fclose(file);
	fclose(newFile);
	







	getchar();
}