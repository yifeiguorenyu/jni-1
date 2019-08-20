#include <stdio.h>
#include <stdlib.h>


//改变内存大小 realloc 
void main09() {
	int num;
	printf("请输入数的个数");
	scanf_s("%d", &num);


	int* arr = (int *)(malloc(sizeof(int)*num));
	int i = 0;
	for (; i < num; i++)
	{
		arr[i] = i;
	}
	printf("arr 的内存指针是:%p \n", arr);
	printf("请输入新增数的个数");
	int new_num;
	scanf_s("%d", &new_num);

	
	//原来那块内存的指针 总的大小, (原来的大小 + 新的大小) 如果原来的内够,会存在原来的地方,不够会copy放在一个新的地方 ,原来的会被释放
	// 新增的时候有可能会失败,失败的时候返回的是NULL
	int* new_arr=(int*)realloc(arr, sizeof(int)*(new_num + num));
	if (new_arr) {
		printf("新开辟的内存指针是 %p \n", new_arr);
		printf("i= %d \n", i);
		for (; i < (new_num + num); i++)
		{
			arr[i] = i;
			printf("%d   %p \n", *(arr + i), (arr + i));
		}
	}
	
	// 新增的时候有可能会失败,失败的时候返回的是NULL
	if (new_arr) {
		free(new_arr);
	}
	getchar();
}