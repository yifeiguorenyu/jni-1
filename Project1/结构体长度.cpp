#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Worker
{
	//32��ô����18 + 4 +8 = 30
	//10+4+8=22
	char name[18];
	int age;
	double sarlary;  //double Ϊ 8
};
void main1q() {
	//1 ���������ֽ�ȥ����
	//2 ���ʱ��,ֻ�ᰴ�ջ�������������ȥ��
	//3 �ܹ���������ֽڵ�������
	printf("%d", sizeof(double));//24
	getchar();
}