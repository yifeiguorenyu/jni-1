#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Worker
{
	char name[10];
	int age;
	double salary;
};

void main092() {
	//�ṹ�������
		//1. 
	//Worker workers[5] = { {"yfied",20,100} }; //������10 �����Ȼ���������
	//workers[1] = { "guorenyu",3,10 };
	//for each (Worker worker in workers)
	//{
	//	printf("---------------------------------\n");
	//	printf("name = %s,age = %d,salary = %lf \n",worker.name,worker.age,worker.salary);
	//	printf("---------------------------------\n");
	//}

	//2 ��̬�����ڴ�
	Worker* worker = (Worker *)malloc(sizeof(Worker) * 5);

	//ָ��Ų��
	worker += 4;

	strcpy_s(worker->name, "xuedayuan");
	worker->age = 30;

	printf("name = %s,age = %d", worker->name,worker->age);


	getchar();
}