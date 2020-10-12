
#include <iostream>;
using namespace std;

double power(int x, int num) {
	double sum = 1.0;
	for (int i = 0; i < num; i++) {
		sum *= x;
	};
	return sum;
}

int main() {
	double y = power(3, 2);
	cout << y;
	return 0;
}
