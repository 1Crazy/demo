
#include <iostream>;
using namespace std;

int main() {
	int a, b;
	cout << "请输入a的值\n";
	cin >> a >> b;
	cout << "你输入的a是：" << a << "\n"; 
	int z; // 有符号(正负)整型
	unsigned int x = 100; // 无符号(只能为正)整型
	int y = 50;
	cout << "y=" << y << "\n";
	cout << "x=" << x << "\n";
	z = y - x;
	cout << "y-x=" << z << "\n";
	cout << "hello world" << "\n";
	cout << "int为" << sizeof(int) << "bytes \n";
	cout << "short为" << sizeof(short) << "bytes \n";
	cout << "long为" << sizeof(long) << "bytes \n";
	cout << "char为" << sizeof(char) << "bytes \n";
	cout << "float为" << sizeof(float) << "bytes \n";

	cout << "double为" << sizeof(double) << "bytes \n";

	return 0;
}
