#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main() {
	char* filename = "F:\\abc.jpeg";
	char*fileencrpyname = "F:\\efg.jpeg";

	char * filedecryname = "F:\\de.jpeg";

	FILE* file=fopen(filename, "rb");
	FILE * file_encrpy=fopen(fileencrpyname, "wb");
	FILE * file_decryp = fopen(filedecryname,"wb");
	if (!file ||!file_encrpy|!file_decryp) {
		printf("�ļ�����ʧ��");
		return;
	}

	//���ܵ�˼·  ��ÿһ���ֽ��ó���,��ÿһ���ֽڴ��� 
	// ��һ�����ó���
	// 10^5 
	//1010
	//0101
	//1111 ���ܺ�

	//���� ͬ�� ^5
	//1111
	//0101
	//1010 �õ���10
	//----------------------���ļ����м���
	int c;
	while ((c=getc(file))!=EOF)
	{
		fputc(c^5, file_encrpy);
	}
	fclose(file_encrpy);

	//---------------------------------------------

	//�ٴδ��ļ���д�ķ�ʽ ���н���

	FILE* newfile = fopen(fileencrpyname, "rb");
	int d;
	while ((d=getc(newfile))!=EOF)
	{
		fputc(d ^ 5, file_decryp);
	}




	fclose(file);
	fclose(newfile);
	

	getchar();
}