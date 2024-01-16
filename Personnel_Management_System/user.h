#pragma once
#include "Graduate.h"
//#include <map>
#include<vector>  //头文件
//#include<algorithm> //算法头文件

#define N 5

class user
{
private:
	string u_name;
	int code;
public:
	bool log_state = false;//登录的状态：判断是否登录成功
	vector<Teacher> t;
	vector<Student> s;
	vector<Graduate> g;
	//multimap<string, Teacher> t;
	//multimap<string, Student> s;
	//multimap<string, Graduate> g;
	//friend Teacher;

	user() 
	{
		u_name = "yyn";
		code = 000;
	}
	void log_in();
	void append();
	void update();
	void find();
	void cancel();
	void display_function();
	~user() {};

	void save_INFO();
};

