#include "stdafx.h"
#include "People.h"
#define _CRT_SECURE_NO_WARNINGS

People::People()
{
	for (int i = 0; i < N; i++)
	{
		name[i] = position[i] = unit[i] = 0;
	}
}

//�����˵���Ϣ
void People::InputInfo(unsigned int num)
{
	int s;
	cout << "������" << endl;
	cin >> name;
	cout << "�Ա𣺣���������0��Ů������1��" << endl;
	cin >> s;
	while (s != 0 && s != 1)
	{
		cout << "���������Ա𣺣���������0��Ů������1��" << endl;
		cin >> s;
	}	
	cout << "ְ��" << endl;
	cin >> position;
	cout << "������λ��" << endl;
	cin >> unit;
	number = num;
	sex = (Sex)s;
}

//�õ����ʺ�/ѧ����Ϣ
unsigned int  People::GetNum()
{
	return number;//���ع��ʺ�/ѧ��
}

//��ʾ�˵���Ϣ
void People::OutPutInfo()
{
	cout << "������" << name << endl;
	cout << "�Ա�";
	if (sex == MALE)
		cout << "��" << endl;
	else
		cout << "Ů" << endl;
	cout << "ְ��" << position << endl;
	cout << "������λ��" << unit << endl;
	cout << "���ʺ�/ѧ�ţ�" << number << endl;
}


People::~People()
{
}
