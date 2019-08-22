#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFileSize(char* fileName) {
	FILE* file = fopen(fileName, "rb");
	if (!file)
	{
		printf("打开文件失败");
		return 0;
	}
	fseek(file,0, SEEK_END);
	int fileSize=ftell(file);

	fclose(file);
	return fileSize;
}


void main() {
	//断点续传 + 文件的切割
	char * filename = "F:\\abc.png";
		int file_size = getFileSize(filename);
		
		FILE *file = fopen(filename, "rb");
		//定义切多少 计算大小 制定文件名

		int file_num = 3;
		char **file_names =(char **) malloc(sizeof(char*)*file_num); //二维数组
		int preFileSize = file_size / file_num;
																	 
		//进行赋值
		int i = 0;
		for (; i < file_num; i++)
		{
			file_names[i] = (char*)malloc(sizeof(char) * 100);
			sprintf(file_names[i],"F:\\abc_%d.jpeg", i);
			printf("%s\n", file_names[i]);
		}
		 i = 0;
		for (; i < file_num; i++)
		{
			//从原文件往切割文件写入数据
			FILE* cur_file= fopen(file_names[i],"wb");
			//写多少
			int start = i*preFileSize;
			int end = (i + 1)*preFileSize;
			if (i==(file_num-1)) {
				end = file_size;
			}
			int j = start;
			//第一个循环 从file里面读, file指针会偏移
			for (; j < end; j++)
			{
				//从file里面读,写入到 cur_file
				fputc(fgetc(file), cur_file);
			}
			fclose(cur_file);
			free(file_names[i]);

		}


		fclose(file);

		free(file_names);

	//文件的合并

	//计算每个文件需要写入多少
















	getchar();
}