#include "stdafx.h"
#include "Card.h"


Card::Card()
{
	balance = times_of_this_month = total_times = 0;//��ʼʱ���Ϊ0���˳�����Ϊ0
	time0 = time(0);// ��ͨ��ʱ��ʱ��
}

void Card::InputInfo()
{
	owner.InputInfo();//����ֿ�����Ϣ
}

bool Card::Pay()
{
	if (balance >= 2)
	{
		balance -= 2;//ˢ���ϳ����۷�2Ԫ
		times_of_this_month++;//���³˳�����+1
		total_times++;//�ܳ˳�����+1

		if (balance <= 5)
			cout << "�����ͣ���ʱ��ֵ��" << endl;

		return true;
	}
	else
		cout << "���㣬��׼�˳���" << endl;

	return false;
}

void Card::TopUp()
{
	int money;//��ֵ���
	cout << "�������ֵ��" << endl;
	cin >> money;

	balance += money;
}

void Card::OutPutInfo()
{
	owner.OutPutInfo();
	cout << "��" << balance << endl;
	cout << "�����ѳ˳�������" << times_of_this_month << endl;
	cout << "�ܳ˳�������" << total_times << endl;
}


Card::~Card()
{
}
