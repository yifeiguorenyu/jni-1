#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getFileSize(char* fileName) {
	FILE* file = fopen(fileName, "rb");
	if (!file)
	{
		printf("���ļ�ʧ��");
		return 0;
	}
	fseek(file,0, SEEK_END);
	int fileSize=ftell(file);

	fclose(file);
	return fileSize;
}


void main() {
	//�ϵ����� + �ļ����и�
	char * filename = "F:\\abc.png";
		int file_size = getFileSize(filename);
		
		FILE *file = fopen(filename, "rb");
		//�����ж��� �����С �ƶ��ļ���

		int file_num = 3;
		char **file_names =(char **) malloc(sizeof(char*)*file_num); //��ά����
		int preFileSize = file_size / file_num;
																	 
		//���и�ֵ
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
			//��ԭ�ļ����и��ļ�д������
			FILE* cur_file= fopen(file_names[i],"wb");
			//д����
			int start = i*preFileSize;
			int end = (i + 1)*preFileSize;
			if (i==(file_num-1)) {
				end = file_size;
			}
			int j = start;
			//��һ��ѭ�� ��file�����, fileָ���ƫ��
			for (; j < end; j++)
			{
				//��file�����,д�뵽 cur_file
				fputc(fgetc(file), cur_file);
			}
			fclose(cur_file);
			free(file_names[i]);

		}


		fclose(file);

		free(file_names);

	//�ļ��ĺϲ�

	//����ÿ���ļ���Ҫд�����
















	getchar();
}