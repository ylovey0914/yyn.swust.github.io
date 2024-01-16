#include "basic_INFO.h"

basic_INFO::basic_INFO()//无参构造
{
	cout << endl << "请输入编号：";
	cin >> num;
	cout << endl << "请输入姓名：";
	cin >> name;
	cout << endl << "请输入性别：";
	cin >> sex;
	cout << endl << "请输入年龄：";
	cin >> age;
}
basic_INFO::basic_INFO(int n, string str, string x, int a)//有参构造
{
	//cout << "0" << endl;
	num = n;
	name = str;
	sex = x;
	age = a;
}
void basic_INFO::base_input()//基本信息输入
{
	cout << endl << "请输入编号：";
	cin >> num;
	cout << endl << "请输入姓名：";
	cin >> name;
	cout << endl << "请输入性别：";
	cin >> sex;
	cout << endl << "请输入年龄：";
	cin >> age;
}
basic_INFO::~basic_INFO()//析构
{
	//cout << "调用base_INFO基类析构函数" << endl;
}

int basic_INFO::getnum()
{
	return num;
}
string basic_INFO::getname()
{
	return name;
}
string basic_INFO::getsex()
{
	return sex;
}
int basic_INFO::getage()
{
	return age;
}