#include "stdafx.h"
#include "People.h"


People::People()
{
}

void People::InputInfo()
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
	cout << "���ʺ�/ѧ�ţ�" << endl;
	cin >> num;

	sex = (Sex)s;
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
