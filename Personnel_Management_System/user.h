#pragma once
#include "Graduate.h"
//#include <map>
#include<vector>  //ͷ�ļ�
//#include<algorithm> //�㷨ͷ�ļ�

#define N 5

class user
{
private:
	string u_name;
	int code;
public:
	bool log_state = false;//��¼��״̬���ж��Ƿ��¼�ɹ�
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

