#include "stdafx.h"
#include "Card.h"


Card::Card()
{
	balance = times_of_this_month = total_times = 0;//��ʼʱ���Ϊ0���˳�����Ϊ0
	time0 = time(0);// ��ͨ��ʱ��ʱ��
}

void Card::pay()
{
	if (balance >= 2)
	{
		balance -= 2;//ˢ���ϳ����۷�2Ԫ
		times_of_this_month++;//���³˳�����+1
		total_times++;//�ܳ˳�����+1
	}
	else
		cout << "���㣬��׼�˳���" << endl;

	if (balance <= 5)
		cout << "�����ͣ���ʱ��ֵ��" << endl;
}

void Card::top_up()
{
	int money;//��ֵ���
	cout << "�������ֵ��" << endl;
	cin >> money;

	balance += money;
}

void Card::print()
{
	owner.print();
	cout << "��" << balance << endl;
	cout << "���³˳�������" << times_of_this_month << endl;
	cout << "�ܳ˳�������" << total_times << endl;
}


Card::~Card()
{
}
