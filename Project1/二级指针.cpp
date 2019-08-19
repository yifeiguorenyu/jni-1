#include <stdio.h>
void init() {
	int num = 12;
	int * p = &num;
	int** p1 = &p;
	printf("num的 内存地址是%p\n", p);
	printf("p的内存地址是%p", p1);
	int*** p2 = &p1;
	printf("p2的内存地址是%p", p2);
	getchar();
}

void getData(int**p1) {
	int *p2 = *p1;
	int p3 = *p2;

	printf("p3=%d", p3);
	getchar();
}


//void main() {
//	//init();
//	int a = 10;
//	int* b = &a;
//	int ** p1 = &b;
//	getData(p1);
//}