#include "stdafx.h"
#include "Bus.h"


Bus::Bus()
{
	int t;
	cout << "���ͣ���С������0����������1����������2��" << endl;
	cin >> t;
	type = (Type)t;
	switch (t)//���ݳ��͵õ��೵���س�����
	{
	case 0: max = SMALL; break;
	case 1: max = MIDDLE; break;
	default: max = LARGE; break;
	}
}


Bus::~Bus()
{
}
