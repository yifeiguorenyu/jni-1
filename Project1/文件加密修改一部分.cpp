#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mainyyyy(){
	//�޸�һ����,��ȫ������

	char * filename = "F:\\efg.jpeg";
	FILE* file=fopen(filename,"wb"); //��ȡ��ָ�� Mat����

	

	if (!file) {
		printf("��ʧ��");
		
	}

	fputc(5, file);
	fclose(file);



	getchar();
}