#include "stdafx.h"
#include "data.h"

template<class T> int GetNumberFromFile(string fname)
{
	int count = 0;//对象个数
	fstream infile(fname, ios::in | ios::binary);//以读方式打开文件

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
	fstream infile(fname, ios::in | ios::binary);//以读方式打开文件

	if (!infile)
	{
		cout << "打开失败！" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < c.size(); i++)
		infile.read((char*)&c[i], sizeof(c[i]));//读取数据

	infile.close();//关闭文件
}


template<class T> void Sort(vector<T> &c)
{
	int i, j;
	bool flag = true;//标记
	T t;//临时变量

	for (i = 0; i <= c.size() - 1 && flag; i++)
		for (j = 0; j <= c.size() - 1 - i; j++)
		{
			flag = false;
			if (c[j].getNum() > c[j + 1].getNum())
			{
				t = c[j];
				c[j] = c[j + 1];
				c[j + 1] = t;
				flag = true;
			}
		}
}

template<class T> int Seach(vector<T> &c, string s)
{
	return 0;
}

template<class T> void FlashFile(string fname, vector<T> &c)
{
	fstream outfile(fname, ios::out | ios::trunc);//截断、以写方式打开文件

	if (!outfile)
	{
		cout << "打开失败！" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < c.size(); i++)
		outfile.write((char*)&c[i], sizeof(c[i]));//写入数据
}

template<class T> void CreateCard(vector<T> &c)
{
	T card;
	T.InputInfo();//输入信息
	T.TopUp();//充值
	c.push_back(T);//加入数据
	Sort<T>(c);
}

template<class T> void OutInfo(vector<T> &c, string num)
{
	s = seach<T>(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		c[s].OutInfo();//显示信息
}

template<class T> void TopUp(vector<T> &c, string num)
{
	s = seach<T>(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		c[s].TopUp();//充值
}

template<class T> void DestroyCard(vector<T> &c, string num)
{
	s = seach<T>(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		c.erase(c.begin() + s, c.begin() + s + 1);//删除元素
}

