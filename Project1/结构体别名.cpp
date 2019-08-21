#include <stdio.h>
#include <stdlib.h>
#include  <string.h>

struct Worker
{
	char name[10];
	int age;
	double salary;
};

//typedef Worker Worker_,Person;

typedef Worker * Worker_;

void main1e() {
	//Person worker = { "yifei",23,1222 };

	////对结构体的指针取别名

	//printf("name = %s,age =%d ,salary= %lf", worker.name, worker.age, worker.salary);
	Worker_ worker_ = (Worker*)malloc(sizeof(Worker));
	worker_->age = 30;
	


	getchar();
}