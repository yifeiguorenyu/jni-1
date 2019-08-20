/**
* 作者：lyn
* 时间：2018.10.30
* 该程序用来演示指针函数
*/
#include<iostream>
using namespace std;
class A {
public:
	A(int a) {
		this->a = a;
	}
	int getA() {
		return a;
	}
private:
	int a;
};

//返回值为指向类型A的指针的函数
A *createA() {
	return new A(5667);
}

int main4() {
	//创建一个指向A类型的指针，并调用createA创建一个A类型的对象
	A* b = createA();
	//通过指针调用类的方法
	cout << "b->a = " << b->getA() << endl;
	return 0;
}
