#include "stdafx.h"
#include "menu.h"

int Menu()
{
	int type;

	cout << "********************" << endl;
	cout << "***欢迎使用本系统***" << endl;
	cout << "********************" << endl;
	cout << "请选择要进入的系统：（卡片输入0，班车输入1）" << endl;
	cin >> type;
	if (type == 0)
		Menu0();//进入卡片系统
	else
		BusMenu();//进入班车系统

	return 0;
}

int Menu0()
{
	int re;//返回操作命令

	cout << "请选择要进行的操作：" << endl;
	cout << "1：创建新卡" << endl;
	cout << "2：查询信息" << endl;
	cout << "3：余额充值" << endl;
	cout << "4：销毁卡片" << endl;
	cout << "0：离开系统" << endl;
	cout << "********************" << endl;

	return re;
}

void Menu1()
{
	int type, money;

	cout << "********************" << endl;
	cout << "请输入卡的类型：（学生卡输入1，教师卡输入2，限制卡输入3，临时卡输入4）" << endl;
	cin >> type;

	cout << "*****感谢使用！*****" << endl;
}

void Menu2()
{
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;

	cout << "*****感谢使用！*****" << endl;
}

void Menu3()
{
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;

	cout << "*****感谢使用！*****" << endl;
}

void Menu4()
{
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;

	cout << "*****感谢使用！*****" << endl;
}

void BusMenu()
{
}


