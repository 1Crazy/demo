// 主函数调用内联函数时不会有转子函数的开销
// 内联函数使用关键字 inline修饰
// 内联函数体内不能有循环语句和switch语句
// 内联函数的定义必须出现在内联函数第一次被调用之前
// 对内联函数不能进行异常接口声明

#include <iostream>;
using namespace std;

inline double sum(double a, double b) {
	return a + b;
}

int main() {
	double z = sum(5.1, 6.1);
	cout << "c为" << z << endl;

	return 0;
}

// constexpr 修饰的函数，在其所有参数都是constexpr时一定返回constexpr， 函数体中必须有且仅有一条return语句。
constexpr int get_size() { return 20; }

constexpr int foo = get_size();