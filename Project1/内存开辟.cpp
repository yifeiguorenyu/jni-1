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
	//ջ ���2m ��̬�ڴ濪�� ����������������
	// �� ���%80 ��̬�ڴ濪�� ��Ҫ�ֶ�����
	while(true) {
		staticlloc();
		Sleep(300);
	}


/*	int arr[(int)(0.2*1024*1024)]*/; //�ڴ���� 4�� ��ջ ����

	getchar();
}