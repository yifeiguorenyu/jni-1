#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maingetlength() {
	char * filename = "F:\\abc.jpeg";
	FILE * file = fopen(filename,"r");
	if (!file) {
		printf("��ʧ��");
		exit(0);
		return;
	}
	//û��һ����������ֱ�����ļ���С�� 
	// ���ļ���ָ���ƶ������,��ȥ����ƫ����

	//�������� file ��0 ��ʼ,  SEEK_SET(��ͷ)  SEEK_CUR(��ǰ) SEEK_END(�ƶ������ )
	fseek(file, 0, SEEK_END);

	//ͳ��ƫ�Ƶ�λ�� ��0 ��ʼͳ��
	 long filesize=ftell(file);
	 printf("%ld", filesize);

		fclose(file);
	getchar();
}