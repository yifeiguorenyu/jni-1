/**
* ���ߣ�lyn
* ʱ�䣺2018.10.30
* �ó���������ʾָ�뺯��
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

//����ֵΪָ������A��ָ��ĺ���
A *createA() {
	return new A(5667);
}

int main4() {
	//����һ��ָ��A���͵�ָ�룬������createA����һ��A���͵Ķ���
	A* b = createA();
	//ͨ��ָ�������ķ���
	cout << "b->a = " << b->getA() << endl;
	return 0;
}
