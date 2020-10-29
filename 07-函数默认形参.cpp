// 注意有默认值得形参需要写在没有默认值的形参右边
#include <iostream>;
using namespace std;

int doubleAdd(int a, int b = 6, int c = 7);

int add(int a = 5, int b = 6) {
	return a + b;
}

int main() {
	int c =add();
	int d = doubleAdd(5);

	cout << "c为" << c << "\n";
	cout << "d为" << d << endl;
	return 0;
}

int doubleAdd(int a, int b, int c) {
	return a * 2 + b * 2 + c * 2;
}