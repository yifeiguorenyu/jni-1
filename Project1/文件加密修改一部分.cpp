#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mainyyyy(){
	//修改一部份,不全部加密

	char * filename = "F:\\efg.jpeg";
	FILE* file=fopen(filename,"wb"); //获取流指针 Mat矩阵

	

	if (!file) {
		printf("打开失败");
		
	}

	fputc(5, file);
	fclose(file);



	getchar();
}