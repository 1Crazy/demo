#include <iostream>
using namespace std;

/** 
	结构体结构：
	
	struct 结构体名称 {
		公有成员
	protected:
		保护型成员
	private:
		私有成员
	};
	
**/

struct Student {	//学生信息结构体
	int num;		//学号
	string name;	//姓名，字符串对象，将在第6章详细介绍
	char sex;		//性别
	int age;		//年龄
};

/**
	union 联合体名称 {
		公有成员
	protected:
		保护型成员
	private:
		私有成员
	};

**/
class ExamInfo {
	private:
		string name;	//课程名称
		enum { GRADE, PASS, PERCENTAGE } mode;//计分方式
		union {
			char grade;	//等级制的成绩
			bool pass;	//只记是否通过课程的成绩
			int percent;	//百分制的成绩
		};
	public:
		//三种构造函数，分别用等级、是否通过和百分初始化
		ExamInfo(string name, char grade)
			: name(name), mode(GRADE), grade(grade) { }
		ExamInfo(string name, bool pass)
			: name(name), mode(PASS), pass(pass) { }
		ExamInfo(string name, int percent)
			: name(name), mode(PERCENTAGE), percent(percent) { }
		void show();
};

void ExamInfo::show() {
	cout << name << ": ";
	switch (mode) {
		case GRADE: cout << grade;  break;
		case PASS: cout << (pass ? "PASS" : "FAIL"); break;
		case PERCENTAGE: cout << percent; break;
	}
	cout << endl;
}


int main() {
	Student stu = { 97001, "Lin Lin", 'F', 19 };
	cout << "Num:  " << stu.num << endl;
	cout << "Name: " << stu.name << endl;
	cout << "Sex:  " << stu.sex << endl;
	cout << "Age:  " << stu.age << endl;

	ExamInfo course1("English", 'B');
	ExamInfo course2("Calculus", true);
	ExamInfo course3("C++ Programming", 85);
	course1.show();
	course2.show();
	course3.show();

	return 0;
}