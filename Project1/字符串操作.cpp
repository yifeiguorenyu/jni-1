#include <stdio.h>
#include <string.h>
#include  <stdlib.h>
void init9() {
	//字符串的长度,字符串的转换,字符串的比较,字符串查找,包含,拼接,截取,大小写转换 字符串的截取,字符串的替换
	char* str = "guorneyu";
	 int len=strlen(str);
	 printf("字符串长度= %d\n", len);


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
	printf("str的长度是=%d", sizeof(str) / sizeof(char));*/








	char* arr = "xiaojiejie";

	int len=init11(arr);
	char* str2 = "100f";
	int s2= atoi(str2);
	printf("str2转成int是 %d", s2);

	getchar();
}