//���11~999֮�����M��������X��X2��X3��Ϊ��������
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
			cout << i << "�������ƽ�����������ǻ�����" << "����ƽ��" << i * i << "��������" << i * i * i << "\n";
		}
	}
	return 0;
}
