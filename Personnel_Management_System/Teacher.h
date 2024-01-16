#pragma once
#include "basic_INFO.h"

class Teacher : virtual public basic_INFO
{
private:
	string rank;   //÷∞≥∆
	string depart; //≤ø√≈
public:
	Teacher();
	Teacher(int n, string str, string x, int a, string r, string dp);
	virtual void input();
	void setvalue(string r, string d);
	//void read();
	void save();
	void output();
	~Teacher();

	string getrank();
	string getdepart();
};
