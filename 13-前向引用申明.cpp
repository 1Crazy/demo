#include <iostream>
using namespace std;

class B;  //前向引用声明

class A {

public:

	void f(B b);

};

class B {

public:

	void g(A a);

};

int main() {
	A a;
	return 0;
}