#include "Student.h"

Student::Student()
{
	cout << endl << "������ϵ��";
	cin >> level;
	cout << endl << "������ɼ���";
	cin >> grade;
}
Student::Student(int n, string str, string x, int a, string l, int g) :basic_INFO(n, str, x, a)
{
	cout << "2" << endl;
	level = l;
	grade = g;
}
void Student::input()
{
	base_input();
	cout << endl << "������ϵ��";
	cin >> level;
	cout << endl << "������ɼ���";
	cin >> grade;
}
void Student::setvalue(string l, int g)
{
	level = l;
	grade = g;
}
void Student::save()
{
	ofstream fout("student.txt", ios::app); //����ʵ���趨,ios::app���Ա�֤ÿ�ε����ݲ�������
	fout << "\n������������������������" << endl;
	fout << "student information:" << endl;   //����д���ļ�
	fout << "num:" << getnum() << endl;
	fout << "name:" << getname() << endl;
	fout << "sex:" << getsex() << endl;
	fout << "age:" << getage() << endl;
	fout << "level:" << level << endl;
	fout << "grade:" << grade << endl;
	fout.close();
}
void Student::output()
{
	cout << endl;
	cout << getnum() << " " << getname() << " " << getsex() << " " << getage();
	cout << " " << level << " " << grade;
	cout << endl;
}
Student::~Student()
{
	//cout << "����Student��������������" << endl;
}
string Student::getlevel()
{
	return level;
}
int Student::getgrade()
{
	return grade;
}
