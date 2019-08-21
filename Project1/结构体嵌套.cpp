#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//结构体的嵌套


struct Worker
{


	char name[10];
	int age;
	double salary;
	struct Work
	{
		char name[10];
		char grade[10];
	}job;
};



void main999() {

struct	Worker  worker = {"yfie",20,10234 ,{"Android","middle"} };
	printf("work.name = %s,work.grade=%s",worker.job.name,worker.job.grade);
	getchar();
}
