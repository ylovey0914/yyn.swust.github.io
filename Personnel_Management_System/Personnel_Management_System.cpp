#include "Personnel_Management_System.h"
//#include <iomainp>

int main()
{
	cout << "欢迎您来到'不聪明的猴子'开发的人员管理系统！" << endl;

	user user1;
	while (user1.log_state == false)//循环1：用于登录
	{
		user1.log_in();
	}

	//初始化
	fout_t.close();
	fout_s.close();
	fout_g.close();

	while (1)//主循环：用于执行不同功能
	{
		if (state == 0)
		{
			user1.display_function();
			cout << "\n请输入将要执行的功能号：";
			cin >> value;
			state = 1;
		}
		else
		{
			if (value == 1)
			{
				//state = 1;
				user1.append();//完成信息的录入和保存
			}
			else if (value == 2)
			{
				//state = 2;
				user1.update();
			}
			else if (value == 3)
			{
				//state = 3;
				user1.find();
			}
			else if (value == 4)
			{
				//state = 4;
				user1.cancel();
				user1.save_INFO();
				return 0;
			}
			state = 0;
			value = 0;
		}
	}
	return 0;
}

//有参构造的对象！
//Teacher teacher1(1, "鲜大权", "男", 61, "高等数学教师", "理学院");
//Teacher teacher2(2, "王玲", "女", 32, "线性代数教师", "理学院");
//Teacher teacher3(3, "刘明强", "男", 30, "大学物理教师", "理学院");

//Student student1(1, "袁雨宁", "男", 19, "通信工程", 2);
//Student student2(2, "何笃凯", "男", 20, "通信工程", 5);
//Student student3(3, "高一范", "男", 20, "通信工程", 1);

//Graduate graduate1(1, "桑庆林", "男", 22, "研究生", "信息工程学院", "通信工程", 1, "5G", "张华");

//user1.t.push_back(teacher1);
//user1.t.push_back(teacher2);
//user1.t.push_back(teacher3);
//user1.s.push_back(student1);
//user1.s.push_back(student2);
//user1.s.push_back(student3);
//user1.g.push_back(graduate1);

//定义基类虚指针，指向不同类的接口函数代码实现
//basic_INFO* p1;
//p1 = &student1;
//p1->output();

//p1 = &teacher1;
//p1->output();

//p1 = &graduate1;
//p1->output();

/*teacher1.output();
student1.output();
graduate1.output();*/