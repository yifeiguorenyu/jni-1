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
	printf("ѹ���Ľ����� %d %d", current, total);
}

//ѹ���ķ���
void compress(char * file_name,void(callback)(int,int)) {
	callback(12, 44);
}

//�������ݵ�ѹ���� �ص�
void main() {
	void (*call_p)(int, int) = call_back;
	compress("", call_p);
	getchar();
	
	//init();
}