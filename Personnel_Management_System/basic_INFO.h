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
	basic_INFO();									//�޲ι���
	basic_INFO(int n, string str, string x, int a);	//�вι���
	void base_input();								//������Ϣ����
	//virtual void read() = 0;
	virtual void save() = 0;
	virtual void output() = 0;						//����������Ϣ��������Ϊ���麯�����ṩһ���ӿڣ�
	~basic_INFO();									//����

	int getnum();
	string getname();
	string getsex();
	int getage();
};