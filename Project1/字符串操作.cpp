#include <stdio.h>
#include <string.h>
#include  <stdlib.h>
void init9() {
	//�ַ����ĳ���,�ַ�����ת��,�ַ����ıȽ�,�ַ�������,����,ƴ��,��ȡ,��Сдת�� �ַ����Ľ�ȡ,�ַ������滻
	char* str = "guorneyu";
	 int len=strlen(str);
	 printf("�ַ�������= %d\n", len);


	getchar();
}
int init11(char* str){
	int len = 0;
	while (*str!='\0')
	{
		str++;
		len++;
	}


	return len;
}
void mainoo() {
	//init9();

	/*char str[] = { 'F','g','h','i','\0' };
	printf("str�ĳ�����=%d", sizeof(str) / sizeof(char));*/








	char* arr = "xiaojiejie";

	int len=init11(arr);
	char* str2 = "100f";
	int s2= atoi(str2);
	printf("str2ת��int�� %d", s2);

	getchar();
}