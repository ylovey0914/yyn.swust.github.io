#include "Teacher.h"

Teacher::Teacher()
{
	cout << endl << "������ְ�ƣ�";
	cin >> rank;
	cout << endl << "�����벿�ţ�";
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
	cout << endl << "������ְ�ƣ�";
	cin >> rank;
	cout << endl << "�����벿�ţ�";
	cin >> depart;
}
void Teacher::setvalue(string r, string d)
{
	rank = r;
	depart = d;
}
void Teacher::save()
{
	ofstream fout("teacher.txt", ios::app); //����ʵ���趨,ios::app���Ա�֤ÿ�ε����ݲ�������
	fout << "\n������������������������" << endl;
	fout << "teacher information:" << endl;   //����д���ļ�
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
	//cout << "����Teacher��������������" << endl;
}

string Teacher::getrank()
{
	return rank;
}
string Teacher::getdepart()
{
	return depart;
}