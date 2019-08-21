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
		printf("文件操作失败");
		return;
	}

	//加密的思路  把每一个字节拿出来,把每一个字节处理 
	// 把一部分拿出来
	// 10^5 
	//1010
	//0101
	//1111 加密后

	//解密 同样 ^5
	//1111
	//0101
	//1010 得到了10
	//----------------------打开文件进行加密
	int c;
	while ((c=getc(file))!=EOF)
	{
		fputc(c^5, file_encrpy);
	}
	fclose(file_encrpy);

	//---------------------------------------------

	//再次打开文件以写的方式 进行解密

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