#include "stdafx.h"
#include "Bus.h"
#include "data.h"

Bus::Bus()
{
	passengers = all = 0;//初始化乘车人数
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

void Bus::GetOn(string f)
{
	passengers = 0;//到站、乘客下车
	int n = GetNumberFromFile(f);//得到待上车人数
	vector<Card>c(n);
	GetData(f, c);//得到数据

	int i = 0;//车上人数
	int j = 0;
	while (i < max && j < n)//班车未满且还有人待上车
	{
		if (c[j].GetOn())//上车成功
			i++;//车上人数+1
		j++;
		
	}
	if (i == max && j < n)//车满、还有人没上车
		cout << "班车已满，请乘下一趟班车！" << endl;

	passengers = i;
	all += passengers;//总乘车人数增加i

	cout << endl;
	OutPutInfo();
	cout << endl;

	FlashFile(f, c);
}

//显示班车的信息
void Bus::OutPutInfo()
{
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
}


Bus::~Bus()
{
}
