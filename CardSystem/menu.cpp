#include "stdafx.h"
#include "menu.h"
#include "data.h"

int Menu()
{
	int type;

	cout << "********************" << endl;
	cout << "***欢迎使用本系统***" << endl;
	cout << "********************" << endl;
	cout << "请选择要进入的系统：（卡片输入0，班车输入1）" << endl;
	cin >> type;
	if (type == 0)
		CardMenu();//进入卡片系统
	else
		BusMenu();//进入班车系统

	return 0;
}

void CardMenu()
{
	int m;//返回操作命令
	int type;//卡的种类

	cout << "********************" << endl;
	cout << "请输入卡的类型：（学生卡输入1，教师卡输入2，限制卡输入3，临时卡输入4）" << endl;
	cin >> type;
	cout << "请选择要进行的操作：" << endl;
	cout << "1：创建新卡" << endl;
	cout << "2：查询信息" << endl;
	cout << "3：余额充值" << endl;
	cout << "4：销毁卡片" << endl;
	cout << "0：离开系统" << endl;
	cin >> m;
	cout << "********************" << endl;
	
	SelectMenu(type, m);
}

void SelectMenu(int type, int m)
{
	switch (m)
	{
	case 1:
		Menu1(type);
		break;
	case 2:
		Menu2(type);
		break;
	case 3:
		Menu3(type);
		break;
	case 4:
		Menu4(type);
		break;
	default:
		break;
	}
}


void Menu1(int type)
{
	cout << "********************" << endl;
	//switch (type)
	//{
	//case 1:
	//	CreateCard<Student_Card>();
	//	break;
	//case 2:
	//	CreateCard<Teacher_Card>();
	//	break;
	//case 3:
	//	CreateCard<Restrict_Card>();
	//	break;
	//case 4:
	//	CreateCard<Temporary_Card>();
	//	break;
	//default:
	//	break;
	//}
	cout << endl;
	CardMenu();//返回初始菜单
}

void Menu2(int type)
{
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	//OutInfo(num);//查询信息
	cout << endl;
	CardMenu();//返回初始菜单
}

void Menu3(int type)
{
	int type;
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	//TopUp(num);//余额充值
	cout << endl;
	CardMenu();//返回初始菜单
}

void Menu4(int type)
{
	int type;
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	//DestroyCard(num);//销毁卡片
	cout << endl;
	CardMenu();//返回初始菜单
}

void Menu0()
{
	cout << "*****使用愉快！*****" << endl;
}

void BusMenu()
{
}


