#include <stdio.h>
#include <stdlib.h>


//�ı��ڴ��С realloc 
void main09() {
	int num;
	printf("���������ĸ���");
	scanf_s("%d", &num);


	int* arr = (int *)(malloc(sizeof(int)*num));
	int i = 0;
	for (; i < num; i++)
	{
		arr[i] = i;
	}
	printf("arr ���ڴ�ָ����:%p \n", arr);
	printf("�������������ĸ���");
	int new_num;
	scanf_s("%d", &new_num);

	
	//ԭ���ǿ��ڴ��ָ�� �ܵĴ�С, (ԭ���Ĵ�С + �µĴ�С) ���ԭ�����ڹ�,�����ԭ���ĵط�,������copy����һ���µĵط� ,ԭ���Ļᱻ�ͷ�
	// ������ʱ���п��ܻ�ʧ��,ʧ�ܵ�ʱ�򷵻ص���NULL
	int* new_arr=(int*)realloc(arr, sizeof(int)*(new_num + num));
	if (new_arr) {
		printf("�¿��ٵ��ڴ�ָ���� %p \n", new_arr);
		printf("i= %d \n", i);
		for (; i < (new_num + num); i++)
		{
			arr[i] = i;
			printf("%d   %p \n", *(arr + i), (arr + i));
		}
	}
	
	// ������ʱ���п��ܻ�ʧ��,ʧ�ܵ�ʱ�򷵻ص���NULL
	if (new_arr) {
		free(new_arr);
	}
	getchar();
}