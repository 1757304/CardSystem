#include "stdafx.h"
#include "People.h"
#define _CRT_SECURE_NO_WARNINGS

People::People()
{
}

//�����˵���Ϣ
void People::InputInfo(char * num)
{
	int s;
	cout << "������" << endl;
	cin >> name;
	cout << "�Ա𣺣���������0��Ů������1��" << endl;
	cin >> s;
	cout << "ְ��" << endl;
	cin >> position;
	cout << "������λ��" << endl;
	cin >> unit;
	strcpy(number, num);
	sex = (Sex)s;
}

//�õ����ʺ�/ѧ����Ϣ
char *  People::GetNum()
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
