#include <stdio.h>

void main() {
	int arr[] = { 10,21,32,43 };
	int i = 0;
	for (; i < 4; i++)
	{
	/*	printf("i=%d\n", i);*/
	}
	printf("arr=%p\n", &arr);
	printf("arr=%p\n", arr);
	printf("arr[0]=%p\n", &arr[0]);//����ָ��ָ���������� �׵�ַ

	int* arr_p = arr;
	printf("arr_p = %d\n", *arr_p);
	//��ָ�����++
	arr_p++;
	printf("arr_p=%d", *arr_p);

	getchar();
}