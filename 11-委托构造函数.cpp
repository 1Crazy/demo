#include <iostream>;
using namespace std;

class Clock {
	public:
		// C++ 11 新增委托构造函数 ，为了不在实现一个默认构造函数，委托构造函数调用了自定义构造函数
		Clock() : Clock(0, 0, 0) {} 

		Clock(int newH, int newM, int newS); // 自定义构造函数
		void setTime(int newH = 0, int newM = 0, int newS = 0);
		void showTime();
	private:
		int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS):hour(newH),minute(newM),second(newS){
}

void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second;
}


int main() {
	// 调用声明 类 对象名
	Clock myClock;
	Clock myClock1(1, 2, 3);
	Clock myClock2;
	myClock.setTime(12, 1, 2);
	myClock.showTime();
	myClock1.showTime();
	myClock2.showTime();
	return 0;
}
