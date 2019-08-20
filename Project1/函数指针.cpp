#include <stdio.h>

void init1() {
	int num = 12;
	int * num_p = &num;
	printf("%p", num_p);
	getchar();
}

void add(int num1,int num2) {
	printf("num1+num2= %d \n", (num1 + num2));
}

void mins(int num1, int num2) {
	printf("num1-num2=%d \n", (num1 - num2));
}
void opreatea(void  (method)(int,int),int num1,int num2) {
	method(num1, num2);
}

void init11() {
	void(*add_p)(int, int) = add;
	void(*mins_p)(int, int) = mins;
	opreatea(add_p, 29, 33);
	opreatea(mins_p, 58, 33);
	getchar();
}

void call_back(int current,int total) {
	printf("压缩的进度是 %d %d", current, total);
}

//压缩的方法
void compress(char * file_name,void(callback)(int,int)) {
	callback(12, 44);
}

//监听数据的压缩和 回调
void main() {
	void (*call_p)(int, int) = call_back;
	compress("", call_p);
	getchar();
	
	//init();
}