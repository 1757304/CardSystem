#include "stdafx.h"
#include "menu.h"

void Menu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4)
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

void CardMenu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4)
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
	
	SelectMenu(c1, c2, c3, c4, type, m);
}

void SelectMenu(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type, int m)
{
	switch (m)
	{
	case 1:
		Menu1(c1, c2, c3, c4, type);
		break;
	case 2:
		Menu2(c1, c2, c3, c4, type);
		break;
	case 3:
		Menu3(c1, c2, c3, c4, type);
		break;
	case 4:
		Menu4(c1, c2, c3, c4, type);
		break;
	default:
		Menu0(c1, c2, c3, c4);
		break;
	}
}


void Menu1(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type)
{
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	switch (type)//创建指定类型的卡
	{
	case 1:
		CreateCard(c1, num, type);
		break;
	case 2:
		CreateCard(c2, num, type);
		break;
	case 3:
		CreateCard(c3, num, type);
		break;
	case 4:
		CreateCard(c4, num, type);
		break;
	default:
		break;
	}
	cout << endl;
	CardMenu(c1, c2, c3, c4);//返回初始菜单
}

void Menu2(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type)
{
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	switch (type)//查询指定类型卡的信息
	{
	case 1:
		OutPutInfo(c1, num);
		break;
	case 2:
		OutPutInfo(c2, num);
		break;
	case 3:
		OutPutInfo(c3, num);
	case 4:
		OutPutInfo(c4, num);
	default:
		break;
	}
	cout << endl;
	CardMenu(c1, c2, c3, c4);//返回初始菜单
}

void Menu3(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type)
{
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	switch (type)//充值指定类型的卡
	{
	case 1:
		TopUp(c1, num);
		break;
	case 2:
		TopUp(c2, num);
		break;
	case 3:
		TopUp(c3, num);
	case 4:
		TopUp(c4, num);
	default:
		break;
	}
	cout << endl;
	CardMenu(c1, c2, c3, c4);//返回初始菜单
}

void Menu4(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4, int type)
{
	string num;

	cout << "********************" << endl;
	cout << "请输入您的卡号：" << endl;
	cin >> num;
	switch (type)//销毁指定类型的卡
	{
	case 1:
		DestroyCard(c1, num);
		break;
	case 2:
		DestroyCard(c2, num);
		break;
	case 3:
		DestroyCard(c3, num);
	case 4:
		DestroyCard(c4, num);
	default:
		break;
	}
	cout << endl;
	CardMenu(c1, c2, c3, c4);//返回初始菜单
}

void Menu0(vector<Card *> &c1, vector<Card *> &c2, vector<Card *> &c3, vector<Card *> &c4)
{
	//更新文件
	FlashFile(f1, c1);
	FlashFile(f2, c2);
	FlashFile(f3, c3);
	FlashFile(f4, c4);

	cout << "*****使用愉快！*****" << endl;
}

void BusMenu()
{
}

int GetNumberFromFile(string fname)
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

	Card c;
	while (infile.read((char*)&c, sizeof(c)))//强制类型转换为(char*),
	{
		count++;
	}
	infile.close();//关闭文件

	return count;
}

template<class T> void GetData(string fname, vector<T *> &c)
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
	{
		c[i] = new T;//分配空间
		infile.read((char*)&(*(c[i])), sizeof(T));//读取数据
	}

	//Sort(c);//排序

	infile.close();//关闭文件
}


void Sort(vector<Card *> &c)
{
	//递增排序
	int i, j;
	bool flag = true;//标记
	Card * t;//临时变量

	for (i = 0; i <= c.size() - 1 && flag; i++)
		for (j = 0; j <= c.size() - 1 - i; j++)
		{
			flag = false;
			if (c[j]->GetNum() > c[j + 1]->GetNum())
			{
				t = c[j];
				c[j] = c[j + 1];
				c[j + 1] = t;
				flag = true;
			}
		}
}

int Search(vector<Card *> &c, string num)
{
	//二分查找
	int low = 0, high = c.size() - 1, mid;
	while (low < high)
	{
		mid = (low + high) / 2;
		if (c[mid]->GetNum() == num)
			return mid;
		else if (c[mid]->GetNum() > num)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

void FlashFile(string fname, vector<Card *> &c)
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
		outfile.write((char*)&(*(c[i])), sizeof(*(c[i])));//写入数据
	}

	outfile.close();
}

void CreateCard(vector<Card *> &c, string num, int type)
{
	int s = Search(c, num);
	if (s != -1)//已存在
	{
		cout << "此卡已存在！" << endl;
		return;
	}

	//创建
	Card * card = nullptr;
	switch (type)//输入信息
	{
	case 1:
		card = new StudentCard;
		card->InputInfo(num);
		break;
	case 2:
		card = new TeacherCard;
		card->InputInfo(num);
		break;
	case 3:
		card = new RestrictCard;
		card->InputInfo(num);
		break;
	case 4:
		card = new TemporaryCard;
		card->InputInfo(num);
	default:
		break;
	}
	card->TopUp();//充值
	c.push_back(card);//加入数据
	Sort(c);
}

void OutPutInfo(vector<Card *> &c, string num)
{
	int s = Search(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		(*(c[s])).OutPutInfo();//显示信息
}

void TopUp(vector<Card *> &c, string num)
{
	int s = Search(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		(*(c[s])).TopUp();//充值
}

void DestroyCard(vector<Card *> &c, string num)
{
	int s = Search(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		c.erase(c.begin() + s, c.begin() + s + 1);//删除元素
}