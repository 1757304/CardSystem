#include "stdafx.h"
#include "menu.h"

//总菜单
void Menu()
{
	int type;

	cout << "******************************" << endl;
	cout << "********欢迎使用本系统********" << endl;
	cout << "******************************" << endl;
	cout << "请选择要进入的系统：（卡片输入0，班车输入1）" << endl;
	cin >> type;

	int n = GetNumberFromFile(fname);//得到卡文件中数据总量
	vector<Card>c(n);//创建卡片数组
	GetData(fname, c);//取出数据，存入数组

	if (type == 0)
		SeleteMenu(c);
		
	else
		BusMenu(c);
}

//选择菜单
void SeleteMenu(vector<Card>& c)
{

	int m;//返回操作命令

	cout << "******************************" << endl;
	cout << "请选择要进行的操作：" << endl;
	cout << "1：创建新卡" << endl;
	cout << "2：查询信息" << endl;
	cout << "3：余额充值" << endl;
	cout << "4：销毁卡片" << endl;
	cout << "0：离开系统" << endl;
	cin >> m;
	switch (m)//选择子菜单
	{
	case 1:
		Menu1(c);
		break;
	case 2:
		Menu2(c);
		break;
	case 3:
		Menu3(c);
		break;
	case 4:
		Menu4(c);
		break;
	default:
		Menu0(c);
		break;
	}
}

//创建新卡菜单
void Menu1(vector<Card>& c)
{
	unsigned int num;

	cout << "******************************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	CreateCard(c, num);//创建新卡

	SeleteMenu(c);//返回选择菜单
}

//查询信息菜单
void Menu2(vector<Card>& c)
{
	unsigned int num;

	cout << "******************************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	OutPutInfo(c, num);//查询信息

	SeleteMenu(c);//返回选择菜单
}

//余额充值菜单
void Menu3(vector<Card>& c)
{
	unsigned int num;

	cout << "******************************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	TopUp(c, num);//余额充值

	SeleteMenu(c);//返回选择菜单
}

//销毁卡片菜单
void Menu4(vector<Card>& c)
{
	unsigned int num;

	cout << "******************************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	DestroyCard(c, num);//销毁卡片

	SeleteMenu(c);//返回选择菜单
}

//班车菜单
void BusMenu(vector<Card>& c)
{
	Bus bus;//班车
	cout << "******************************" << endl;
	bus.InputInfo();//输入班车信息
	cout << "---" << endl;
	bus.GetOn(c, 0);//上车
	cout << "---" << endl;
	bus.GetOn(c, 1);//上车
	cout << "---" << endl;
	bus.GetOn(c, 2);//上车
	bus.OutPutInfo();
	Menu0(c);
}

//退出系统
void Menu0(vector<Card>& c)
{
	FlashFile(fname, c);//更新文件
	cout << "**********使用愉快！**********" << endl;
}
