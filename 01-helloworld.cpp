
#include <iostream>;
using namespace std;

int main() {
	int a, b;
	cout << "������a��ֵ\n";
	cin >> a >> b;
	cout << "�������a�ǣ�" << a << "\n"; 
	int z; // �з���(����)����
	unsigned int x = 100; // �޷���(ֻ��Ϊ��)����
	int y = 50;
	cout << "y=" << y << "\n";
	cout << "x=" << x << "\n";
	z = y - x;
	cout << "y-x=" << z << "\n";
	cout << "hello world" << "\n";
	cout << "intΪ" << sizeof(int) << "bytes \n";
	cout << "shortΪ" << sizeof(short) << "bytes \n";
	cout << "longΪ" << sizeof(long) << "bytes \n";
	cout << "charΪ" << sizeof(char) << "bytes \n";
	cout << "floatΪ" << sizeof(float) << "bytes \n";

	cout << "doubleΪ" << sizeof(double) << "bytes \n";

	return 0;
}
