#include "user.h"

//ȫ�ֱ����Ķ���
string User[N] = { "yyn", "ywx", "hdk", "yjd" , "tjy" };	//�ù���ϵͳ�����е��û���
int Code[N] = { 111, 222, 333, 444, 555 };					//�����û�����Ӧ������
int log_flag = 0;											//���ڱ�ʾ���������û���
int exist_flag = 0;											//���ڱ�ʾ��Ա�Ƿ����

int id_num;													//����������ݣ�1������ʦ��2����ѧ����3�����о���
string target_name;											//���ڴ����Ҫ���ҵ���Ա����
basic_INFO* p;												//����һ������ָ�룺���ڵ��ò�ͬ���е�ͬ��save()����

string id[3] = { "��ʦ", "ѧ��", "�о���" };				//���ڱ�ʾ¼����Ϣ�����

//��������
//void save_INFO();											//�������Ԫ����

void user::log_in()
{
	if (log_flag == 0)
	{
		cout << "\n�������û�����";
		log_flag = 1;
	}
	else
	{
		cout << "\n�����������û�����";
	}

	cin >> u_name;
	for (int i = 0; i < N; i++)
	{
		if (u_name == User[i])
		{
			cout << "\n������3λ�������룺";
			cin >> code;
			if (code == Code[i])
			{
				log_state = true;
				cout << "\n��¼�ɹ���" << endl;
			}
			else
			{
				log_state = false;
				cout << "\n���������������������......" << endl;
				i--;
			}
		}
	}
	if (log_state == false)
	{
		cout << "\n���޴��û���" << endl;
	}
}
void user::append()
{
	cout << "\n��ѡ��¼����Ϣ����Ա��ݣ�" << endl;
	cout << "1.��ʦ" << endl;
	cout << "2.ѧ��" << endl;
	cout << "3.�о���" << endl;
	cout << "ѡ�����ݱ���ǣ�";
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
		cout << "������������������......" << endl;
	}
	if (exist_flag == 1)
	{
		//p->save();	//����¼����Ա����Ϣ�����ڴ˴��ᱨ��
		cout << id[id_num - 1] << "��Ϣ��¼��ɹ�" << endl;
		exist_flag = 0;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
}
void user::update()
{
	cout << "\n��ѡ����Ҫ�޸���Ϣ����Ա��ݣ�" << endl;
	cout << "1.��ʦ" << endl;
	cout << "2.ѧ��" << endl;
	cout << "3.�о���" << endl;
	cout << "ѡ���޸���ݵı���ǣ�";
	cin >> id_num;
	if (id_num == 1)
	{
		cout << "��������Ҫ�޸ĵ���ʦ�����֣�";
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
		cout << "��������Ҫ�޸ĵ�ѧ�������֣�";
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
		cout << "��������Ҫ�޸ĵ��о��������֣�";
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
		cout << "������������������......" << endl;
	}
	if (exist_flag == 1)
	{
		cout << id[id_num - 1] << "��Ϣ���޸ĳɹ�" << endl;
		exist_flag = 0;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
}
void user::find()
{
	cout << "\n��ѡ����Ҫ������Ϣ����Ա��ݣ�" << endl;
	cout << "1.��ʦ" << endl;
	cout << "2.ѧ��" << endl;
	cout << "3.�о���" << endl;
	cout << "ѡ�������ݵı���ǣ�";
	cin >> id_num;
	if (id_num == 1)
	{
		cout << "��������ʦ�����֣�";
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
		cout << "������ѧ�������֣�";
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
		cout << "�������о��������֣�";
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
		cout << "������������������......" << endl;
	}
	if (exist_flag == 1)
	{
		exist_flag = 0;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
}
void user::cancel()
{
	cout << "\n�˻��ѳɹ�ע����" << endl;
}
void user::display_function()
{
	cout << endl;
	cout << "1.�����Ա��Ϣ" << endl;
	cout << "2.�޸���Ա��Ϣ" << endl;
	cout << "3.������Ա��Ϣ" << endl;
	cout << "4.ע���˻�" << endl;
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