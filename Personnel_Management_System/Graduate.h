#pragma once
#include "Teacher.h"
#include "Student.h"

class Graduate : public Teacher, public Student
{
private:
	string direction;//�о�����
	string tutor;    //��ʦ
public:
	Graduate();
	Graduate(int n, string str, string x, int a, string r, string dp, string l, int g, string d, string t);
	void input();
	void setvalue(string d, string t);
	//void read();
	void save();
	void output();
	~Graduate();
};


