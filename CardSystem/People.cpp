#include "stdafx.h"
#include "People.h"


People::People()
{
}

//�����˵���Ϣ
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

//�õ����ʺ�/ѧ����Ϣ
string People::GetNum()
{
	return num;//���ع��ʺ�/ѧ��
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
	cout << "���ʺ�/ѧ�ţ�" << num << endl;
}


People::~People()
{
}
