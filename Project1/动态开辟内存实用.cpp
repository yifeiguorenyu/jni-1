#include <stdio.h>
#include <stdlib.h>

void main_o() {
	//��������������Ҫ�����û��������,Ȼ���������

	int num;
	//��ȡ�û������ֵ
	printf("���������ĸ���: ");
	scanf_s("%d", &num);
	//����һ������������û�������
	// int arr[num] ��̬���� ,�ڴ��С���ܸı�
	int* arr = (int*)(malloc(sizeof(int)*num));
	int print_num;
	for (int i = 0; i < num; i++)
	{
		printf("�������%d��ֵ", (i+1));
		scanf_s("%d", &print_num);
		arr[i] = print_num; // arr[i] = *(arr+i)
		printf("%d %p \n", *(arr + i) , (arr + i));
	}

	//���� ������  ������




	getchar();
}