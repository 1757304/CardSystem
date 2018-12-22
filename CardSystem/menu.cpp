#include "stdafx.h"
#include "menu.h"

//�ܲ˵�
void Menu()
{
	int type;

	cout << "******************************" << endl;
	cout << "********��ӭʹ�ñ�ϵͳ********" << endl;
	cout << "******************************" << endl;
	cout << "��ѡ��Ҫ�����ϵͳ������Ƭ����0���೵����1��" << endl;
	cin >> type;

	int n = GetNumberFromFile(fname);//�õ����ļ�����������
	vector<Card>c(n);//������Ƭ����
	GetData(fname, c);//ȡ�����ݣ���������

	if (type == 0)
		SeleteMenu(c);
		
	else
		BusMenu(c);
}

//ѡ��˵�
void SeleteMenu(vector<Card>& c)
{

	int m;//���ز�������

	cout << "******************************" << endl;
	cout << "��ѡ��Ҫ���еĲ�����" << endl;
	cout << "1�������¿�" << endl;
	cout << "2����ѯ��Ϣ" << endl;
	cout << "3������ֵ" << endl;
	cout << "4�����ٿ�Ƭ" << endl;
	cout << "0���뿪ϵͳ" << endl;
	cin >> m;
	switch (m)//ѡ���Ӳ˵�
	{
	case 1:
		Menu1(c);
		break;
	case 2:
		Menu2(c);
		break;
	case 3:
		Menu3(c);
		break;
	case 4:
		Menu4(c);
		break;
	default:
		Menu0(c);
		break;
	}
}

//�����¿��˵�
void Menu1(vector<Card>& c)
{
	unsigned int num;

	cout << "******************************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	CreateCard(c, num);//�����¿�

	SeleteMenu(c);//����ѡ��˵�
}

//��ѯ��Ϣ�˵�
void Menu2(vector<Card>& c)
{
	unsigned int num;

	cout << "******************************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	OutPutInfo(c, num);//��ѯ��Ϣ

	SeleteMenu(c);//����ѡ��˵�
}

//����ֵ�˵�
void Menu3(vector<Card>& c)
{
	unsigned int num;

	cout << "******************************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	TopUp(c, num);//����ֵ

	SeleteMenu(c);//����ѡ��˵�
}

//���ٿ�Ƭ�˵�
void Menu4(vector<Card>& c)
{
	unsigned int num;

	cout << "******************************" << endl;
	cout << "���������Ŀ��ţ�" << endl;
	cin >> num;
	DestroyCard(c, num);//���ٿ�Ƭ

	SeleteMenu(c);//����ѡ��˵�
}

//�೵�˵�
void BusMenu(vector<Card>& c)
{
	Bus bus;//�೵
	cout << "******************************" << endl;
	bus.InputInfo();//����೵��Ϣ
	cout << "---" << endl;
	bus.GetOn(c, 0);//�ϳ�
	cout << "---" << endl;
	bus.GetOn(c, 1);//�ϳ�
	cout << "---" << endl;
	bus.GetOn(c, 2);//�ϳ�
	bus.OutPutInfo();
	Menu0(c);
}

//�˳�ϵͳ
void Menu0(vector<Card>& c)
{
	FlashFile(fname, c);//�����ļ�
	cout << "**********ʹ����죡**********" << endl;
}
