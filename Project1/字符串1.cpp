#include <stdio.h>

void inita() {
	char arr[] = { 'D','a','b','c','f','\0' }; //字符串结尾以 \0
	printf("%s \n", arr);
	char* str = "郭仁宇";
	// char 数组 和char*的区别, 一个能更改,一个不能更改
	//char数组不能改,
	//char* 能改

	
	arr[2] = 'h';
	printf("%s \n", arr);
	printf("%s \n", str);
}


void mainnn() {
	inita();
	getchar();
}