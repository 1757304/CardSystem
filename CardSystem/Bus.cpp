#include "stdafx.h"
#include "Bus.h"

Bus::Bus()
{
	passengers = all = on_time = 0;//初始化乘车人数

	ifstream infile;
	infile.open("schedule.txt", ios::binary);//以读方式打开文件

	if (!infile)
	{
		cout << "打开失败！" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < 3; i++)
	{
		infile >> schedule[i].hour;
		infile >> schedule[i].min;
	}
}

//输入班车的信息
void Bus::InputInfo()
{
	unsigned int num;
	cout << "工资号/学号：" << endl;
	cin >> num;
	driver.InputInfo(num);//输入司机的信息

	int t;
	cout << "车型：（小型输入0，中型输入1，大型输入2）" << endl;
	cin >> t;
	type = (BusType)t;
	switch (t)//根据车型得到班车的核载人数
	{
	case 0: 
		max = SMALL; 
		break;
	case 1: 
		max = MIDDLE; 
		break;
	default: 
		max = LARGE; 
		break;
	}
	cout << "车牌号：" << endl;
	cin >> license_plate_number;
}

void Bus::GetOn(vector<Card>& c, int t)
{
	passengers = 0;//到站、乘客下车
	int hour, min;
	cout << "到达时间：" << endl;
	cin >> hour;
	cin >> min;

	if (hour < schedule[t].hour || (hour == schedule[t].hour && min <= schedule[t].min))
	{
		cout << "准时到达" << endl;
		on_time++;
	}
	else
		cout << "迟到" << endl;

	int i = 0;//车上人数
	int j = 0;
	while (i < max && j < c.size())//班车未满且还有人待上车
	{
		if (c[j].GetOn())//上车成功
		{
			i++;//车上人数+1
		}
		j++;

	}
	if (i == max && j < c.size())//车满、还有人没上车
		cout << "班车已满，请乘下一趟班车！" << endl;

	passengers = i;
	all += passengers;//总乘车人数增加i
}

//显示班车的信息
void Bus::OutPutInfo()
{
	cout << endl;
	cout << "司机信息：" << endl;
	cout << "***" << endl;
 	driver.OutPutInfo();//司机信息
	cout << "***" << endl;
	cout << "车型：";
	switch ((int)type)
	{
	case 0:
		cout << "小型" << endl;
		break;
	case 1:
		cout << "中型" << endl;
		break;
	default:
		cout << "大型" << endl;
		break;
	}
	cout << "车牌号：" << license_plate_number << endl;
	cout << "当前乘客数：" << passengers << endl;
	cout << "总乘车人数：" << all << endl;
	cout << "准时率：" << (double)on_time / 3 << endl;
}


Bus::~Bus()
{
}
