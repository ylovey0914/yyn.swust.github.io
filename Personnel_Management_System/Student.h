#pragma once
#include "basic_INFO.h"

class Student : virtual public basic_INFO
{
private:
	string level;//ѧ��ϵ��
	int grade;//ѧ���ɼ�
public:
	Student();
	Student(int n, string str, string x, int a, string l, int g);
	virtual void input();
	void setvalue(string l, int g);
	//void read();
	void save();
	void output();
	~Student();
	string getlevel();
	int getgrade();
};

