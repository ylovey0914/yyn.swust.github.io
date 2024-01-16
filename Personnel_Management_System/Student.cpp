#include "Student.h"

Student::Student()
{
	cout << endl << "请输入系别：";
	cin >> level;
	cout << endl << "请输入成绩：";
	cin >> grade;
}
Student::Student(int n, string str, string x, int a, string l, int g) :basic_INFO(n, str, x, a)
{
	cout << "2" << endl;
	level = l;
	grade = g;
}
void Student::input()
{
	base_input();
	cout << endl << "请输入系别：";
	cin >> level;
	cout << endl << "请输入成绩：";
	cin >> grade;
}
void Student::setvalue(string l, int g)
{
	level = l;
	grade = g;
}
void Student::save()
{
	ofstream fout("student.txt", ios::app); //根据实际设定,ios::app可以保证每次的数据不被覆盖
	fout << "\n————————————" << endl;
	fout << "student information:" << endl;   //标题写入文件
	fout << "num:" << getnum() << endl;
	fout << "name:" << getname() << endl;
	fout << "sex:" << getsex() << endl;
	fout << "age:" << getage() << endl;
	fout << "level:" << level << endl;
	fout << "grade:" << grade << endl;
	fout.close();
}
void Student::output()
{
	cout << endl;
	cout << getnum() << " " << getname() << " " << getsex() << " " << getage();
	cout << " " << level << " " << grade;
	cout << endl;
}
Student::~Student()
{
	//cout << "调用Student派生类析构函数" << endl;
}
string Student::getlevel()
{
	return level;
}
int Student::getgrade()
{
	return grade;
}
