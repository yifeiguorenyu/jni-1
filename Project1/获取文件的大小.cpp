#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maingetlength() {
	char * filename = "F:\\abc.jpeg";
	FILE * file = fopen(filename,"r");
	if (!file) {
		printf("打开失败");
		exit(0);
		return;
	}
	//没有一个函数可以直接拿文件大小的 
	// 将文件的指针移动到最后,再去计算偏移量

	//三个参数 file 从0 开始,  SEEK_SET(开头)  SEEK_CUR(当前) SEEK_END(移动到最后 )
	fseek(file, 0, SEEK_END);

	//统计偏移的位置 从0 开始统计
	 long filesize=ftell(file);
	 printf("%ld", filesize);

		fclose(file);
	getchar();
}