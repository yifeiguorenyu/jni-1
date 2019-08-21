#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Worker
{
	char name[10];
	int age;
	double salary;
};

void main901() {
	Worker  * work = (Worker*)malloc(sizeof(Worker));
	
	strcpy_s(work->name, "yifei");
	work->age = 30;
	work->salary = 2301;

	printf("name = %s,age=%d,salary = %lf\n", work->name, work->age, work->salary);
	printf("worker µÄ´óÐ¡ %d", sizeof(Worker));

	if (work) {
		free(work);
		work = NULL;
	}

	getchar();
}