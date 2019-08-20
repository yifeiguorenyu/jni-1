#include <stdio.h>
#include <Windows.h>

void staticlloc() {
	int arr[(int)(0.2 * 1024 * 1024)];
	for (int i = 0; i < 5; i++)
	{
		arr[i] = i;
		printf("%d %p \n", *(arr + i), (arr + i));
	}
}




void mainaa() {
	//栈 最多2m 静态内存开辟 方法结束会最多回收
	// 堆 最多%80 动态内存开辟 需要手动回收
	while(true) {
		staticlloc();
		Sleep(300);
	}


/*	int arr[(int)(0.2*1024*1024)]*/; //内存分区 4区 堆栈 方法

	getchar();
}