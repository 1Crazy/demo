#include <iostream>;
using namespace std;

unsigned fac(unsigned n) {
	if (n == 0) {
		return 1;
	}
	else {
		return fac(n - 1) * n;
	}
}

int main() {
	unsigned n;

	cout << "请输入一个正整数：";
	cin >> n;

	unsigned y = fac(n);

	cout << n << "!为" << y << endl;
	return n;
}
