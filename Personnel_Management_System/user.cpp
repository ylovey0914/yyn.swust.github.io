#include "user.h"

//全局变量的定义
string User[N] = { "yyn", "ywx", "hdk", "yjd" , "tjy" };	//该管理系统中已有的用户名
int Code[N] = { 111, 222, 333, 444, 555 };					//各个用户名对应的密码
int log_flag = 0;											//用于表示重新输入用户名
int exist_flag = 0;											//用于表示人员是否存在

int id_num;													//用于区分身份：1代表老师，2代表学生，3代表研究生
string target_name;											//用于存放需要查找的人员姓名
basic_INFO* p;												//定义一个基类指针：用于调用不同类中的同名save()函数

string id[3] = { "老师", "学生", "研究生" };				//用于表示录入信息的身份

//函数声明
//void save_INFO();											//定义的友元函数

void user::log_in()
{
	if (log_flag == 0)
	{
		cout << "\n请输入用户名：";
		log_flag = 1;
	}
	else
	{
		cout << "\n请重新输入用户名：";
	}

	cin >> u_name;
	for (int i = 0; i < N; i++)
	{
		if (u_name == User[i])
		{
			cout << "\n请输入3位数字密码：";
			cin >> code;
			if (code == Code[i])
			{
				log_state = true;
				cout << "\n登录成功！" << endl;
			}
			else
			{
				log_state = false;
				cout << "\n密码输入错误，请重新输入......" << endl;
				i--;
			}
		}
	}
	if (log_state == false)
	{
		cout << "\n查无此用户！" << endl;
	}
}
void user::append()
{
	cout << "\n请选择录入信息的人员身份：" << endl;
	cout << "1.老师" << endl;
	cout << "2.学生" << endl;
	cout << "3.研究生" << endl;
	cout << "选择的身份编号是：";
	cin >> id_num;
	if (id_num == 1)
	{
		Teacher t1;
		t.push_back(t1);
		exist_flag = 1;
		//p = &t1;
		//p->save();
	}
	else if (id_num == 2)
	{
		Student s1;
		s.push_back(s1);
		exist_flag = 1;
		//p = &s1;
		//p->save();
	}
	else if (id_num == 3)
	{
		Graduate g1;
		g.push_back(g1);
		exist_flag = 1;
		//p = &g1;
		//p->save();
	}
	else
	{
		cout << "输入有误，请重新输入......" << endl;
	}
	if (exist_flag == 1)
	{
		//p->save();	//保存录入人员的信息，加在此处会报错！
		cout << id[id_num - 1] << "信息已录入成功" << endl;
		exist_flag = 0;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
}
void user::update()
{
	cout << "\n请选择想要修改信息的人员身份：" << endl;
	cout << "1.老师" << endl;
	cout << "2.学生" << endl;
	cout << "3.研究生" << endl;
	cout << "选择修改身份的编号是：";
	cin >> id_num;
	if (id_num == 1)
	{
		cout << "请输入想要修改的老师的名字：";
		cin >> target_name;
		for (vector<Teacher>::iterator it = t.begin(); it != t.end(); it++)
		{
			if ((*it).getname() == target_name)
			{
				exist_flag = 1;
				(*it).input();
				//it->save();
			}
		}
	}
	else if (id_num == 2)
	{
		cout << "请输入想要修改的学生的名字：";
		cin >> target_name;
		for (vector<Student>::iterator it = s.begin(); it != s.end(); it++)
		{
			if ((*it).getname() == target_name)
			{
				exist_flag = 1;
				(*it).input();
				//it->save();
			}
		}
	}
	else if (id_num == 3)
	{
		cout << "请输入想要修改的研究生的名字：";
		cin >> target_name;
		for (vector<Graduate>::iterator it = g.begin(); it != g.end(); it++)
		{
			if ((*it).getname() == target_name)
			{
				exist_flag = 1;
				(*it).input();
				//it->save();
			}
		}
	}
	else
	{
		cout << "输入有误，请重新输入......" << endl;
	}
	if (exist_flag == 1)
	{
		cout << id[id_num - 1] << "信息已修改成功" << endl;
		exist_flag = 0;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
}
void user::find()
{
	cout << "\n请选择想要查找信息的人员身份：" << endl;
	cout << "1.老师" << endl;
	cout << "2.学生" << endl;
	cout << "3.研究生" << endl;
	cout << "选择查找身份的编号是：";
	cin >> id_num;
	if (id_num == 1)
	{
		cout << "请输入老师的名字：";
		cin >> target_name;
		for (vector<Teacher>::iterator it = t.begin(); it != t.end(); it++)
		{
			if ((*it).getname() == target_name)
			{
				exist_flag = 1;
				(*it).output();
			}
		}
	}
	else if (id_num == 2)
	{
		cout << "请输入学生的名字：";
		cin >> target_name;
		for (vector<Student>::iterator it = s.begin(); it != s.end(); it++)
		{
			if ((*it).getname() == target_name)
			{
				exist_flag = 1;
				(*it).output();
			}
		}
	}
	else if (id_num == 3)
	{
		cout << "请输入研究生的名字：";
		cin >> target_name;
		for (vector<Graduate>::iterator it = g.begin(); it != g.end(); it++)
		{
			if ((*it).getname() == target_name)
			{
				exist_flag = 1;
				(*it).output();
			}
		}
	}
	else
	{
		cout << "输入有误，请重新输入......" << endl;
	}
	if (exist_flag == 1)
	{
		exist_flag = 0;
	}
	else
	{
		cout << "查无此人！" << endl;
	}
}
void user::cancel()
{
	cout << "\n账户已成功注销！" << endl;
}
void user::display_function()
{
	cout << endl;
	cout << "1.添加人员信息" << endl;
	cout << "2.修改人员信息" << endl;
	cout << "3.查找人员信息" << endl;
	cout << "4.注销账户" << endl;
}

void user::save_INFO()
{
	for (vector<Teacher>::iterator it = t.begin(); it != t.end(); it++)
	{
		it->save();
	}
	for (vector<Student>::iterator it = s.begin(); it != s.end(); it++)
	{
		it->save();
	}
	for (vector<Graduate>::iterator it = g.begin(); it != g.end(); it++)
	{
		it->save();
	}
}