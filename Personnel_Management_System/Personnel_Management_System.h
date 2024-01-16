#pragma once
#include "user.h"

int value;			//功能号：用于选择执行哪个分支结构
int state = 0;		//指示程序运行的状态，true表示正在执行某一功能，false表示

fstream fout_t("teacher.txt", ios::out);
fstream fout_s("student.txt", ios::out);
fstream fout_g("graduate.txt", ios::out);