#include <stdio.h>

void inita() {
	char arr[] = { 'D','a','b','c','f','\0' }; //�ַ�����β�� \0
	printf("%s \n", arr);
	char* str = "yifeifei";
	// char ���� ��char*������, һ���ܸ���,һ�����ܸ���
	//char���鲻�ܸ�,
	//char* �ܸ�

	str = "guorenyu";
	arr[2] = 'h';
	printf("%s \n", arr);
	printf("%s \n", str);
}


void main() {
	inita();
	getchar();
}