#pragma once
#include "user.h"

int value;			//���ܺţ�����ѡ��ִ���ĸ���֧�ṹ
int state = 0;		//ָʾ�������е�״̬��true��ʾ����ִ��ĳһ���ܣ�false��ʾ

fstream fout_t("teacher.txt", ios::out);
fstream fout_s("student.txt", ios::out);
fstream fout_g("graduate.txt", ios::out);