#include "stdafx.h"
#include "data.h"

//文件操作

//得到文件中数据的总量
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

//得到文件中数据
void GetData(string fname, vector<Card>& c)
{
	if (c.size() == 0)
		return;
	ifstream infile;
	infile.open(fname, ios::binary);//以读方式打开文件

	if (!infile)
	{
		cout << "打开失败！" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < c.size(); i++)
		infile.read(((char*)&c[i]), sizeof(Card));//读取数据

	Sort(c);//排序

	infile.close();//关闭文件
}

//按卡号排序
void Sort(vector<Card>& c)
{
	if (c.size() < 2)
		return;
	//递增排序
	int i, j;
	bool flag = true;//标记
	Card t;//临时变量

	for (i = 0; i < c.size() && flag; i++)
		for (j = 0; j < c.size() - i; j++)
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

//查找卡片
int Search(vector<Card>& c, string num)
{
	if (c.size() == 0)
		return -1;
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
	if (c[low].GetNum() == num)
		return low;
	else
		return -1;//查找失败
}

//更新文件
void FlashFile(string fname, vector<Card>& c)
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
		outfile.write(((char*)&c[i]), sizeof(Card));//写入数据
	}

	outfile.close();
}

//卡片操作

//创建新卡
void CreateCard(vector<Card>& c, string num)
{
	int s = Search(c, num);
	if (s != -1)//已存在
	{
		cout << "此卡已存在！" << endl;
		return;
	}

	//创建
	Card card;
	card.InputInfo(num);//输入信息
	card.TopUp();//充值
	c.push_back(card);//加入数据
	Sort(c);//排序
}

//查询信息
void OutPutInfo(vector<Card>& c, string num)
{
	int s = Search(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		c[s].OutPutInfo();//显示信息
}

//余额充值
void TopUp(vector<Card>& c, string num)
{
	int s = Search(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		c[s].TopUp();//充值
}

//销毁卡片
void DestroyCard(vector<Card>& c, string num)
{
	int s = Search(c, num);
	if (s == -1)//没找到
		cout << "该卡不存在！" << endl;
	else
		c.erase(c.begin() + s, c.begin() + s + 1);//删除元素
}
