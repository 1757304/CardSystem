#include "stdafx.h"
#include "menu.h"

int Menu()
{
	int type;

	cout << "********************" << endl;
	cout << "***��ӭʹ�ñ�ϵͳ***" << endl;
	cout << "********************" << endl;
	cout << "��ѡ��Ҫ�����ϵͳ������Ƭ����0���೵����1��" << endl;
	cin >> type;
	if (type == 0)
		Menu0();//���뿨Ƭϵͳ
	else
		BusMenu();//����೵ϵͳ

	return 0;
}

int Menu0()
{
	int re;//���ز�������

	cout << "��ѡ��Ҫ���еĲ�����" << endl;
	cout << "1�������¿�" << endl;
	cout << "2����ѯ��Ϣ" << endl;
	cout << "3������ֵ" << endl;
	cout << "4�����ٿ�Ƭ" << endl;
	cout << "0���뿪ϵͳ" << endl;
	cout << "********************" << endl;

	return re;
}

void Menu1()
{
	int type, money;

	cout << "********************" << endl;
	cout << "�����뿨�����ͣ���ѧ��������1����ʦ������2�����ƿ�����3����ʱ������4��" << endl;
	cin >> type;

	cout << "*****��лʹ�ã�*****" << endl;
}

void Menu2()
{
	string num;

	cout << "********************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;

	cout << "*****��лʹ�ã�*****" << endl;
}

void Menu3()
{
	string num;

	cout << "********************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;

	cout << "*****��лʹ�ã�*****" << endl;
}

void Menu4()
{
	string num;

	cout << "********************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;

	cout << "*****��лʹ�ã�*****" << endl;
}

void BusMenu()
{
}


