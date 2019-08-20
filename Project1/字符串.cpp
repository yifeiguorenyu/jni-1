#include <stdio.h>

void print(char* message) {
	printf("%s", message);
}
void method1(void(*print)(char*),char* ass) {
	print(ass);
}
void mainzfc() {
	void(*print_m)(char*) = print;
	printf("%p  %p\n", print, &print); //方法的指针与方法相等
	method1(print_m, "bendi");
	getchar();
}