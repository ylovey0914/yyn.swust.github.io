#include "basic_INFO.h"

basic_INFO::basic_INFO()//�޲ι���
{
	cout << endl << "�������ţ�";
	cin >> num;
	cout << endl << "������������";
	cin >> name;
	cout << endl << "�������Ա�";
	cin >> sex;
	cout << endl << "���������䣺";
	cin >> age;
}
basic_INFO::basic_INFO(int n, string str, string x, int a)//�вι���
{
	//cout << "0" << endl;
	num = n;
	name = str;
	sex = x;
	age = a;
}
void basic_INFO::base_input()//������Ϣ����
{
	cout << endl << "�������ţ�";
	cin >> num;
	cout << endl << "������������";
	cin >> name;
	cout << endl << "�������Ա�";
	cin >> sex;
	cout << endl << "���������䣺";
	cin >> age;
}
basic_INFO::~basic_INFO()//����
{
	//cout << "����base_INFO������������" << endl;
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