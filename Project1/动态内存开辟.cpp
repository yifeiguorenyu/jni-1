#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void dynamiclloc() {
	int* l_p = (int*)(malloc(10 * 1024 * 1024 * (sizeof(int))));
}

void dtnc() {
	
	while (true)
	{
		dynamiclloc();
		Sleep(400);

	}
}


void main() {
	dtnc();
	getchar();
}