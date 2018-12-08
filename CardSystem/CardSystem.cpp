// CardSystem.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <fstream>//将信息保存在文件里
#include <vector>//数组
#include "Bus.h"//车
#include "StudentCard.h"//学生卡
#include "TeacherCard.h"//教师卡
#include "RestrictCard.h"//限制卡
#include "TemporaryCard.h"//临时卡

//文件名
const string f1 = "Student.txt";//学生卡文件名
const string f2 = "Teacher.txt";//教师卡文件名
const string f3 = "Restrict.txt";//限制卡文件名
const string f4 = "Temporary.txt";//临时卡文件名

//菜单
void Menu(vector<StudentCard> &c1, vector<TeacherCard> &c2, vector<RestrictCard> &c3, vector<TemporaryCard> &c4);//总菜单
void CardMenu(vector<StudentCard> &c1, vector<TeacherCard> &c2, vector<RestrictCard> &c3, vector<TemporaryCard> &c4);//在屏幕上显示卡片系统初始菜单，返回操作命令
template<class T> void SelectMenu(vector<T> &c, int m);//选择菜单
template<class T> void Menu1(vector<T> &c);//创建新卡菜单
template<class T> void Menu2(vector<T> &c);//查询信息菜单
template<class T> void Menu3(vector<T> &c);//余额充值菜单
template<class T> void Menu4(vector<T> &c);//销毁卡片菜单
void Menu0(vector<StudentCard> &c1, vector<TeacherCard> &c2, vector<RestrictCard> &c3, vector<TemporaryCard> &c4);//退出系统

//文件操作
template<class T> int GetNumberFromFile(string fname);//得到文件中数据的总量
template<class T> void GetData(string fname, vector<T> &c);
template<class T> void Sort(vector<T> &c);//按卡号排序
template<class T> int Search(vector<T> &c, string num);//查找卡片
template<class T> void FlashFile(string fname, vector<T> &c);//更新文件
void BusMenu();//班车菜单

//卡片操作
template<class T> void CreateCard(vector<T> &c, string num);//创建新卡
template<class T> void OutPutInfo(vector<T> &c, string num);//查询信息
template<class T> void TopUp(vector<T> &c, string num);//余额充值
template<class T> void DestroyCard(vector<T> &c, string num);//销毁卡片

using namespace std;

int main()
{
	//int num1 = GetNumberFromFile(f1);//得到学生卡个数
	//int num2 = GetNumberFromFile(f2);//得到教师卡个数
	//int num3 = GetNumberFromFile(f3);//得到限制卡个数
	//int num4 = GetNumberFromFile(f4);//得到临时卡个数

	vector<StudentCard>c1;//创建学生卡数组
	GetData<StudentCard>(f1, c1);//得到学生卡数据
	//vector<TeacherCard *>c2;//创建教师卡数组
	//GetData(f2, c2);//得到教师卡数据
	//vector<RestrictCard *>c3;//创建限制卡数组
	//GetData(f3, c3);//得到限制卡数据
	//vector<TemporaryCard *>c4;//创建临时卡数组
	//GetData(f4, c4);//得到临时卡数据

	//Menu(c1, c2, c3, c4);//调用菜单
	
    return 0;
}

//菜单
void Menu(vector<StudentCard> &c1, vector<TeacherCard> &c2, vector<RestrictCard> &c3, vector<TemporaryCard> &c4)
{
	int type;

	cout << "********************" << endl;
	cout << "***欢迎使用本系统***" << endl;
	cout << "********************" << endl;
	cout << "请选择要进入的系统：（卡片输入0，班车输入1）" << endl;
	cin >> type;
	if (type == 0)
		CardMenu(c1, c2, c3, c4);//进入卡片系统
	else
		BusMenu();//进入班车系统
}

void CardMenu(vector<StudentCard> &c1, vector<TeacherCard> &c2, vector<RestrictCard> &c3, vector<TemporaryCard> &c4)
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

	switch (type)
	{
	case 1:
		SelectMenu<StudentCard>(c1, m);
		break;
	case 2:
		SelectMenu<TeacherCard>(c2, m);
		break;
	case 3:
		SelectMenu<RestrictCard>(c3, m);
		break;
	case 4:
		SelectMenu<TemporaryCard>(c4, m);
	default:
		break;
	}

}

template<class T> void SelectMenu(vector<T> &c, int m)
{
	switch (m)
	{
	case 1:
		Menu1<T>(c);
		break;
	case 2:
		Menu2<T>(c);
		break;
	case 3:
		Menu3<T>(c);
		break;
	case 4:
		Menu4<T>(c);
		break;
	default:
		break;
	}
}


template<class T> void Menu1(vector<T> &c)
{
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;

	CreateCard<T>(c, num);
}

template<class T> void Menu2(vector<T> &c)
{
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	OutInfo<T>(c, num);//查询信息
}

template<class T> void Menu3(vector<T> &c)
{
	int type;
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	TopUp<T>(c, num);//余额充值
}

template<class T> void Menu4(vector<T> &c)
{
	int type;
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	DestroyCard<T>(c, num);//销毁卡片
}

void Menu0()
{
	cout << "*****使用愉快！*****" << endl;
}

void BusMenu()
{
}


//文件操作
template<class T> int GetNumberFromFile(string fname)
{
	int count = 0;//对象个数
	ifstream infile;
	infile.open(fname, ios::binary);//以读方式打开文件

	if (!infile)
	{
		cout << "打开失败！" << endl;
		getchar();
		exit(0);
	}

	T c;
	while (infile.read((char*)&c, sizeof(c)))//强制类型转换为(char*),
	{
		count++;
	}
	infile.close();//关闭文件

	return count;
}

template<class T> void GetData(string fname, vector<T> &c)
{
	ifstream infile;
	infile.open(fname, ios::binary);//以读方式打开文件

	if (!infile)
	{
		cout << "打开失败！" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < c.size(); i++)
		infile.read((char*)c[i]), sizeof(T));//读取数据

	Sort(c);//排序

	infile.close();//关闭文件
}


template<class T> void Sort(vector<T> &c)
{
	//递增排序
	int i, j;
	bool flag = true;//标记
	T t;//临时变量

	for (i = 0; i <= c.size() - 1 && flag; i++)
		for (j = 0; j <= c.size() - 1 - i; j++)
		{
			flag = false;
			if (c[j].GetNum() > c[j + 1].GetNum())
			{
				t = c[j];
				c[j] = c[j + 1];
				c[j + 1] = t;
				flag = true;
			}
		}
}

template<class T> int Search(vector<T> &c, string num)
{
	//二分查找
	int low = 0, high = c.size() - 1, mid;
	while (low < high)
	{
		mid = (low + high) / 2;
		if (c[mid].GetNum() == num)
			return mid;
		else if (c[mid].GetNum() > num)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

template<class T> void FlashFile(string fname, vector<T> &c)
{
	ofstream outfile;
	outfile.open(fname, ios::trunc);//截断、以写方式打开文件

	if (!outfile)
	{
		cout << "打开失败！" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < c.size(); i++)
	{
		outfile.write((char*)&c[i]), sizeof(T));//写入数据
	}

	outfile.close();
}

//卡片操作
template<class T> void CreateCard(vector<T> &c, string num)
{
	int s = Search<T>(c, num);
	if (s != -1)//已存在
	{
		cout << "此卡已存在！" << endl;
		return;
	}

	//创建
	T card;
	card.InputInfo(num);//输入信息
	card.TopUp();//充值
	c.push_back(card);//加入数据
	Sort(c);
}

template<class T> void OutPutInfo(vector<T> &c, string num)
{
	int s = Search<T>(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		c[s].OutPutInfo();//显示信息
}

template<class T> void TopUp(vector<T> &c, string num)
{
	int s = Search<T>(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		c[s].TopUp();//充值
}

template<class T> void DestroyCard(vector<T> &c, string num)
{
	int s = Search<T>(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		c.erase(c.begin() + s, c.begin() + s + 1);//删除元素
}