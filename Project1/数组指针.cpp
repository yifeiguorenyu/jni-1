#include <stdio.h>
void method1() {
	int arr[] = { 10,21,32,43 };
	int i = 0;
	for (; i < 4; i++)
	{
		/*	printf("i=%d\n", i);*/
	}
	printf("arr=%p\n", &arr);
	printf("arr=%p\n", arr);
	printf("arr[0]=%p\n", &arr[0]);//数组指针指向的是数组的 首地址

	int* arr_p = arr;
	printf("arr_p = %d\n", *arr_p);
	//对指针进行++
	arr_p++;
	printf("arr_p=%d", *arr_p);

	getchar();
}

void method2() {

}

//void main() {
//	int array[] = { 11,54,69,25 };
//	int * p = array;
//	int i = 0;
//	for ( ; i < 4; i++)
//	{
//		printf("%d\n", i);
//	}
//	getchar();
//
//}