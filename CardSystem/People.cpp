#include "stdafx.h"
#include "People.h"


People::People()
{
}

void People::InputInfo(string num)
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

	sex = (Sex)s;
}

string People::GetNum()
{
	return num;//���ع��ʺ�/ѧ��
}

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
	cout << "���ʺ�/ѧ�ţ�" << num << endl;
}


People::~People()
{
}
