// 重载函数的形参必须不同： 个数不同或类型不同。
// 编译程序将根据实参和形参的类型及个数的最佳匹配来选择调用哪一个函数。

#include <iostream>;
using namespace std;

int add(int a, int b);

double add(double a, double b) {
	return a + b;
}

int main() {
	int c =add(5,6);
	double d = add(5.2,6.0);

	cout << "c为" << c << "\n";
	cout << "d为" << d << endl;
	return 0;
}

int add(int a, int b) {
	return a + b ;
}