#include "stdafx.h"
#include "menu.h"
#include "data.h"

int Menu()
{
	int type;

	cout << "********************" << endl;
	cout << "***��ӭʹ�ñ�ϵͳ***" << endl;
	cout << "********************" << endl;
	cout << "��ѡ��Ҫ�����ϵͳ������Ƭ����0���೵����1��" << endl;
	cin >> type;
	if (type == 0)
		CardMenu();//���뿨Ƭϵͳ
	else
		BusMenu();//����೵ϵͳ

	return 0;
}

void CardMenu()
{
	int m;//���ز�������
	int type;//��������

	cout << "********************" << endl;
	cout << "�����뿨�����ͣ���ѧ��������1����ʦ������2�����ƿ�����3����ʱ������4��" << endl;
	cin >> type;
	cout << "��ѡ��Ҫ���еĲ�����" << endl;
	cout << "1�������¿�" << endl;
	cout << "2����ѯ��Ϣ" << endl;
	cout << "3������ֵ" << endl;
	cout << "4�����ٿ�Ƭ" << endl;
	cout << "0���뿪ϵͳ" << endl;
	cin >> m;
	cout << "********************" << endl;
	
	SelectMenu(type, m);
}

void SelectMenu(int type, int m)
{
	switch (m)
	{
	case 1:
		Menu1(type);
		break;
	case 2:
		Menu2(type);
		break;
	case 3:
		Menu3(type);
		break;
	case 4:
		Menu4(type);
		break;
	default:
		break;
	}
}


void Menu1(int type)
{
	cout << "********************" << endl;
	//switch (type)
	//{
	//case 1:
	//	CreateCard<Student_Card>();
	//	break;
	//case 2:
	//	CreateCard<Teacher_Card>();
	//	break;
	//case 3:
	//	CreateCard<Restrict_Card>();
	//	break;
	//case 4:
	//	CreateCard<Temporary_Card>();
	//	break;
	//default:
	//	break;
	//}
	cout << endl;
	CardMenu();//���س�ʼ�˵�
}

void Menu2(int type)
{
	string num;

	cout << "********************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	//OutInfo(num);//��ѯ��Ϣ
	cout << endl;
	CardMenu();//���س�ʼ�˵�
}

void Menu3(int type)
{
	int type;
	string num;

	cout << "********************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	//TopUp(num);//����ֵ
	cout << endl;
	CardMenu();//���س�ʼ�˵�
}

void Menu4(int type)
{
	int type;
	string num;

	cout << "********************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	//DestroyCard(num);//���ٿ�Ƭ
	cout << endl;
	CardMenu();//���س�ʼ�˵�
}

void Menu0()
{
	cout << "*****ʹ����죡*****" << endl;
}

void BusMenu()
{
}


