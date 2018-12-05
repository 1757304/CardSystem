#include "stdafx.h"
#include "Bus.h"


Bus::Bus()
{
}

void Bus::InputInfo()
{
	driver.InputInfo();//输入司机的信息

	int t;
	cout << "车型：（小型输入0，中型输入1，大型输入2）" << endl;
	cin >> t;
	type = (Type)t;
	switch (t)//根据车型得到班车的载乘人数
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
}

void Bus::OutPutInfo()
{
}


Bus::~Bus()
{
}
