
/*
	class 类名称
	{
		public:
			公有成员（外部接口）
		private：
			私有成员 外部不能访问(类名称后面声明私有成员，则关键字可以省略)
		protected：
			保护型成员
	}

*/
#include <iostream>;
using namespace std;

class Clock {
	public:
		Clock();
		// Clock() = default; // 如果我们已经写了构造函数，又希望类内有默认构造函数，C++11中使用 =default 申明默认构造函数。
		Clock(int newH, int newM, int newS); // 自定义构造函数
		void setTime(int newH = 0, int newM = 0, int newS = 0);
		void showTime();
	private:
		int hour, minute, second;
};

// 若无 =default 设定默认构造函数，仍要默认构造函数，则需申明
Clock::Clock():hour(0), minute(0), second(0) {}

// 构造函数，花括号语句前 ：符号后为参数列表，给对应的成员变量赋值
Clock::Clock(int newH, int newM, int newS):hour(newH),minute(newM),second(newS){
}

// 类的成员方法,用限定符::
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

/*
	
*/