#include "stdafx.h"
#include "Bus.h"

Bus::Bus()
{
	passengers = all = on_time = 0;//��ʼ���˳�����

	ifstream infile;
	infile.open("schedule.txt", ios::binary);//�Զ���ʽ���ļ�

	if (!infile)
	{
		cout << "��ʧ�ܣ�" << endl;
		getchar();
		exit(0);
	}

	for (int i = 0; i < 3; i++)
	{
		infile >> schedule[i].hour;
		infile >> schedule[i].min;
	}
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

void Bus::GetOn(vector<Card>& c, int t)
{
	passengers = 0;//��վ���˿��³�
	int hour, min;
	cout << "����ʱ�䣺" << endl;
	cin >> hour;
	cin >> min;

	if (hour < schedule[t].hour || (hour == schedule[t].hour && min <= schedule[t].min))
	{
		cout << "׼ʱ����" << endl;
		on_time++;
	}
	else
		cout << "�ٵ�" << endl;

	int i = 0;//��������
	int j = 0;
	while (i < max && j < c.size())//�೵δ���һ����˴��ϳ�
	{
		if (c[j].GetOn())//�ϳ��ɹ�
		{
			i++;//��������+1
		}
		j++;

	}
	if (i == max && j < c.size())//������������û�ϳ�
		cout << "�೵�����������һ�˰೵��" << endl;

	passengers = i;
	all += passengers;//�ܳ˳���������i
}

//��ʾ�೵����Ϣ
void Bus::OutPutInfo()
{
	cout << endl;
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
	cout << "׼ʱ�ʣ�" << (double)on_time / 3 << endl;
}


Bus::~Bus()
{
}
