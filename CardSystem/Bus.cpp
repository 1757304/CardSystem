#include "stdafx.h"
#include "Bus.h"
#include "data.h"

Bus::Bus()
{
	passengers = all = 0;//��ʼ���˳�����
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
	switch (t)//���ݳ��͵õ��೵�ĺ�������
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
	cout << "���ƺţ�" << endl;
	cin >> license_plate_number;
}

void Bus::GetOn(string f)
{
	passengers = 0;//��վ���˿��³�
	int n = GetNumberFromFile(f);//�õ����ϳ�����
	vector<Card>c(n);
	GetData(f, c);//�õ�����

	int i = 0;//��������
	int j = 0;
	while (i < max && j < n)//�೵δ���һ����˴��ϳ�
	{
		if (c[j].GetOn())//�ϳ��ɹ�
			i++;//��������+1
		j++;
		
	}
	if (i == max && j < n)//������������û�ϳ�
		cout << "�೵�����������һ�˰೵��" << endl;

	passengers = i;
	all += passengers;//�ܳ˳���������i

	cout << endl;
	OutPutInfo();
	cout << endl;

	FlashFile(f, c);
}

//��ʾ�೵����Ϣ
void Bus::OutPutInfo()
{
	cout << "˾����Ϣ��" << endl;
	cout << "***" << endl;
 	driver.OutPutInfo();//˾����Ϣ
	cout << "***" << endl;
	cout << "���ͣ�";
	switch ((int)type)
	{
	case 0:
		cout << "С��" << endl;
		break;
	case 1:
		cout << "����" << endl;
		break;
	default:
		cout << "����" << endl;
		break;
	}
	cout << "���ƺţ�" << license_plate_number << endl;
	cout << "��ǰ�˿�����" << passengers << endl;
	cout << "�ܳ˳�������" << all << endl;
}


Bus::~Bus()
{
}
