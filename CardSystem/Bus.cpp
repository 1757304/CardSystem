#include "stdafx.h"
#include "Bus.h"


Bus::Bus()
{
}

//����೵����Ϣ
void Bus::InputInfo()
{
	unsigned int num;
	cout << "���ʺ�/ѧ�ţ�" << endl;
	cin >> num;
	driver.InputInfo(num);//����˾������Ϣ

	int t;
	cout << "���ͣ���С������0����������1����������2��" << endl;
	cin >> t;
	type = (BusType)t;
	switch (t)//���ݳ��͵õ��೵���س�����
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

//��ʾ�೵����Ϣ
void Bus::OutPutInfo()
{
}


Bus::~Bus()
{
}
