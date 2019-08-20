#include <stdio.h>
#include <stdlib.h>

void main_o() {
	//假设我们现在需要接收用户输入的数,然后进行排序

	int num;
	//获取用户输入的值
	printf("请输入数的个数: ");
	scanf_s("%d", &num);
	//定义一个数组来存放用户的数据
	// int arr[num] 静态开辟 ,内存大小不能改变
	int* arr = (int*)(malloc(sizeof(int)*num));
	int print_num;
	for (int i = 0; i < num; i++)
	{
		printf("请输入第%d的值", (i+1));
		scanf_s("%d", &print_num);
		arr[i] = print_num; // arr[i] = *(arr+i)
		printf("%d %p \n", *(arr + i) , (arr + i));
	}

	//排序 堆排序  快排序




	getchar();
}