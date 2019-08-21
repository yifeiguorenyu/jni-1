#include <string.h>
#include <stdio.h>
#include <stdlib.h>
struct date
{
	int year;
	int month;
	int day;
};
struct student
{
	int number; //4
	
	char sex; //1
	int age; ///4
	char name[10]; //10
	struct date birthday; //12
};
void main1234() {
	printf("%d", sizeof(student)); //32
	getchar();
}