#pragma once
#include <iostream>
#include <string>
#include<fstream>
using namespace std;

class basic_INFO
{
private:
	int num;
	string name;
	string sex;
	int age;
public:
	basic_INFO();									//无参构造
	basic_INFO(int n, string str, string x, int a);	//有参构造
	void base_input();								//基本信息输入
	//virtual void read() = 0;
	virtual void save() = 0;
	virtual void output() = 0;						//基类的输出信息函数声明为纯虚函数，提供一个接口！
	~basic_INFO();									//析构

	int getnum();
	string getname();
	string getsex();
	int getage();
};