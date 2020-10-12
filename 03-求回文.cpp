//输出11~999之间的数M，它满足X、X2和X3均为回文数。
#include <iostream>;
using namespace std;

bool symm(unsigned num) {
	int i = num;
	int m = 0;
	while (i > 0) {
		m = m * 10 + i % 10;
		i /= 10;
	}
	return num == m;
}

int main() {
	for (int i = 11; i <= 999; i++) {
		if (symm(i) && symm(i*i) * symm(i*i) && symm(i*i*i) * symm(i*i*i) * symm(i)) {
			cout << i << "这个数的平方和立方都是回文数" << "它的平方" << i * i << "它的立方" << i * i * i << "\n";
		}
	}
	return 0;
}
