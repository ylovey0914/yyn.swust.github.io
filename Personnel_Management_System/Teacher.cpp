#include "Teacher.h"

Teacher::Teacher()
{
	cout << endl << "请输入职称：";
	cin >> rank;
	cout << endl << "请输入部门：";
	cin >> depart;
}
Teacher::Teacher(int n, string str, string x, int a, string r, string dp) :basic_INFO(n, str, x, a)
{
	cout << "1" << endl;
	rank = r;
	depart = dp;
}
void Teacher::input()
{
	base_input();
	cout << endl << "请输入职称：";
	cin >> rank;
	cout << endl << "请输入部门：";
	cin >> depart;
}
void Teacher::setvalue(string r, string d)
{
	rank = r;
	depart = d;
}
void Teacher::save()
{
	ofstream fout("teacher.txt", ios::app); //根据实际设定,ios::app可以保证每次的数据不被覆盖
	fout << "\n————————————" << endl;
	fout << "teacher information:" << endl;   //标题写入文件
	fout << "num:" << getnum() << endl;
	fout << "name:" << getname() << endl;
	fout << "sex:" << getsex() << endl;
	fout << "age:" << getage() << endl;
	fout << "rank:" << rank << endl;
	fout << "depart:" << depart << endl;
	fout.close();
}
void Teacher::output()
{
	cout << endl;
	cout << getnum() << " " << getname() << " " << getsex() << " " << getage();
	cout << " " << rank << " " << depart;
	cout << endl;
}
Teacher::~Teacher()
{
	//cout << "调用Teacher派生类析构函数" << endl;
}

string Teacher::getrank()
{
	return rank;
}
string Teacher::getdepart()
{
	return depart;
}