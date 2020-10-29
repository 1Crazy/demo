// 通过&为实参设置引用类型的形参，让实参与形参实现双向绑定。

#include <iostream>;
using namespace std;

void exchangeNum(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}

int main() {
	int x = 5;
	int y = 6;

	cout << "x当前为" << x << "；当前为" << y << "\n";
	exchangeNum(x, y);
	cout << "调用exchange函数以后: \n x当前为" << x << "；y当前为" << y << endl;

	return 0;
}
