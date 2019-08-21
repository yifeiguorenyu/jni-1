#include <stdio.h>

#include <string.h>

struct Worker
{
	char name[10];
	int age;
	double salary;



}Darreu = {"yifei",33,1908},jack;

void mainj0() {
	jack.age = 34;
	strcpy_s(jack.name, "guorenyu");

	printf("name = %s ,%d,%lf", Darreu.name, Darreu.age, Darreu.salary);
	getchar();
}