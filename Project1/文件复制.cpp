#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maincopy() {
	char* filename = "F:\\abc.jpeg";
	char* filecpyname = "F:\\efg.jpeg";

	//把图片当做二进制文件操作后面需要加上 rb 操作模式为rb或者 wb
	FILE * file = fopen(filename, "rb");

	FILE *file_copy = fopen(filecpyname, "wb");
	if (!filename||!filecpyname) {
		printf("打开失败");
		exit(0);
		return;
	}
	int buffer[512];
	int len;
	while ((len=fread(buffer,sizeof(int),512,file))!=0)
	{
		fwrite(buffer, sizeof(int), len, file_copy);
	}


	fclose(file);
	fclose(file_copy);

	getchar();
}