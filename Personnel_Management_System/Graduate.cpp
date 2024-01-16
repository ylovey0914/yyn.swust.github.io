#include "Graduate.h"

Graduate::Graduate()
{
	cout << endl << "�������о�����";
	cin >> direction;
	cout << endl << "�����뵼ʦ��";
	cin >> tutor;
}
Graduate::Graduate(int n, string str, string x, int a, string r, string dp, string l, int g, string d, string t) :Teacher(n, str, x, a, r, dp), Student(n, str, x, a, l, g), basic_INFO(n, str, x, a)
{
	cout << "3" << endl;
	direction = d;
	tutor = t;
}
void Graduate::input()
{
	Teacher::input();
	Student::input();
	cout << endl << "�������о�����";
	cin >> direction;
	cout << endl << "�����뵼ʦ��";
	cin >> tutor;
}
void Graduate::setvalue(string d, string t)
{
	direction = d;
	tutor = t;
}
void Graduate::save()
{
	ofstream fout("graduate.txt", ios::app); //����ʵ���趨,ios::app���Ա�֤ÿ�ε����ݲ�������
	fout << "\n������������������������" << endl;
	fout << "graduate information:" << endl;   //����д���ļ�
	fout << "num:" << getnum() << endl;
	fout << "name:" << getname() << endl;
	fout << "sex:" << getsex() << endl;
	fout << "age:" << getage() << endl;
	fout << "rank:" << getrank() << endl;
	fout << "depart:" << getdepart() << endl;
	fout << "level:" << getlevel() << endl;
	fout << "grade:" << getgrade() << endl;
	fout.close();
}
void Graduate::output()
{
	cout << endl;
	cout << getnum() << " " << getname() << " " << getsex() << " " << getage();
	cout << " " << getrank() << " " << getdepart() << " " << getlevel() << " " << getgrade();
	cout << " " << direction << " " << tutor << endl;
	cout << endl;
}
Graduate::~Graduate()
{
	//cout << "����Graduate��������������" << endl;
}