#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

void main123() {
	// 可以初始化发生器
	srand((unsigned)time(NULL));
	int i = 0;
	printf("Ten random from 0 to 99 \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", rand() % 100);
	}
	getchar();
}