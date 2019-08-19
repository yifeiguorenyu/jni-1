#include <stdio.h>
//int main(int argc, const char*argv[]) {
//
//	printf("int 数据类型的字节数=%d \n" ,sizeof(int) );
//	printf("double 数据类型的字节数=%d \n", sizeof(double));
//	printf("char 数据类型的字节数=%d \n", sizeof(char));
//	printf("long 数据类型的字节数=%d \n", sizeof(long));
//	getchar();
//}

//void main(int argc, const char*argv[]) {
//	int i = 100;
//	double  d = 2000;
//	printf("i的值是%d\n", i);
//	printf("i的值是%d \n ", *(&i)); //通过* 获取地址的值
//	//指针变量 int * 代表int 类型的指针
//	int * p = &i;
//	double* p1 = &d;
//	printf("i的值是%d \n", *p);
//	printf("d的值是%lf", *p1);
//	getchar();
//}
//
//void main(int argc, const char*argv[]) {
//	int i = 100;
//	int *p = &i;
//	//通过指针区修改i的值
//	//获取指针的值进行间接的修改
//	printf("i的值是%d \n", i);
//	*p = 99;
//	printf("i的值是%d \n", i);
//	getchar();
//}

void change(int i) {
	i = 200;
	printf("i的内存地址是 %p\n", &i);
}

//通过内存地址来修改
void change1(int * p) {
	*p = 200;
}
//void main(int argc, const char*argv[]) {
//	int i = 100;
//	printf("i的内存地址是 %p\n", &i);
//	printf("i的值是%d \n", i);
//	change1(&i);
//	printf("i修改后的值是%d \n", i);
//	getchar();
//}
void change3(int *p1,int *p2) {
	int  p3 = *p1;
	*p1 = *p2;
	*p2 = p3;
}

//对两个值进行交换
//void main(int argc, const char*argv[]) {
//	int a = 100;
//	int b = 200;
//
//	printf("a的值= %d,b的值= %d \n", a, b);
//
//	change3(&a, &b);
//		printf("a的值= %d,b的值= %d", a, b);
//	getchar();
//}

//对两个值进行交换
//void main(int argc, const char*argv[]) {
//	int a = 100;
//	int b = 200;
//	int *p1 = &a;
//	int *p2 = &b;
//	p1 = p2;
//
//	printf("a的值= %d,b的值= %d \n", *p1, *p2);
//
//	getchar();

//}

void change4(int *p1, int *p2) {
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;


}
//void main(int argc, const char*argv[]) {
//	int a = 100;
//	int b = 200;
//	//change4(&a, &b);
//	a = a | b;
//	b = a^b;
//	a = a^b;
//	printf("a的值是 %d,b的值是%d", a, b);
//	getchar();
//}
//
//void main(int argc, const char*argv[]) {
//	//
//	getchar();
//}