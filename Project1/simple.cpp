#include <stdio.h>
//int main(int argc, const char*argv[]) {
//
//	printf("int �������͵��ֽ���=%d \n" ,sizeof(int) );
//	printf("double �������͵��ֽ���=%d \n", sizeof(double));
//	printf("char �������͵��ֽ���=%d \n", sizeof(char));
//	printf("long �������͵��ֽ���=%d \n", sizeof(long));
//	getchar();
//}

//void main(int argc, const char*argv[]) {
//	int i = 100;
//	double  d = 2000;
//	printf("i��ֵ��%d\n", i);
//	printf("i��ֵ��%d \n ", *(&i)); //ͨ��* ��ȡ��ַ��ֵ
//	//ָ����� int * ����int ���͵�ָ��
//	int * p = &i;
//	double* p1 = &d;
//	printf("i��ֵ��%d \n", *p);
//	printf("d��ֵ��%lf", *p1);
//	getchar();
//}
//
//void main(int argc, const char*argv[]) {
//	int i = 100;
//	int *p = &i;
//	//ͨ��ָ�����޸�i��ֵ
//	//��ȡָ���ֵ���м�ӵ��޸�
//	printf("i��ֵ��%d \n", i);
//	*p = 99;
//	printf("i��ֵ��%d \n", i);
//	getchar();
//}

void change(int i) {
	i = 200;
	printf("i���ڴ��ַ�� %p\n", &i);
}

//ͨ���ڴ��ַ���޸�
void change1(int * p) {
	*p = 200;
}
//void main(int argc, const char*argv[]) {
//	int i = 100;
//	printf("i���ڴ��ַ�� %p\n", &i);
//	printf("i��ֵ��%d \n", i);
//	change1(&i);
//	printf("i�޸ĺ��ֵ��%d \n", i);
//	getchar();
//}
void change3(int *p1,int *p2) {
	int  p3 = *p1;
	*p1 = *p2;
	*p2 = p3;
}

//������ֵ���н���
//void main(int argc, const char*argv[]) {
//	int a = 100;
//	int b = 200;
//
//	printf("a��ֵ= %d,b��ֵ= %d \n", a, b);
//
//	change3(&a, &b);
//		printf("a��ֵ= %d,b��ֵ= %d", a, b);
//	getchar();
//}

//������ֵ���н���
//void main(int argc, const char*argv[]) {
//	int a = 100;
//	int b = 200;
//	int *p1 = &a;
//	int *p2 = &b;
//	p1 = p2;
//
//	printf("a��ֵ= %d,b��ֵ= %d \n", *p1, *p2);
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
//	printf("a��ֵ�� %d,b��ֵ��%d", a, b);
//	getchar();
//}
//
//void main(int argc, const char*argv[]) {
//	//
//	getchar();
//}