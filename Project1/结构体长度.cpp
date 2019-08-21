#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Worker
{
	//32怎么来的18 + 4 +8 = 30
	//10+4+8=22
	char name[18];
	int age;
	double sarlary;  //double 为 8
};
void main1q() {
	//1 按照最大的字节去结算
	//2 算得时候,只会按照基本的数据类型去算
	//3 能够除以最大字节的整数倍
	printf("%d", sizeof(double));//24
	getchar();
}