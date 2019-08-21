#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Person
{
	char  name[10];
	int age;
};

void main213() {
	Person peson ;
	strcpy_s(peson.name, "yifei");
	
	peson.age = 34;
	printf("%s, %d",peson.name,peson.age);
	getchar();
}