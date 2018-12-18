#include "stdafx.h"
#include "Card.h"


Card::Card()
{
	balance = times_of_this_month = 0;//��ʼʱ���Ϊ0���˳�����Ϊ0
	time0 = time(0);// ��ͨ��ʱ��ʱ��
}

//���뿨����Ϣ
void Card::InputInfo(string num)
{
	int t;

	owner.InputInfo(num);//����ֿ�����Ϣ

	cout << "�������ͣ���ѧ��������0����ʦ������1�����ƿ�����2����ʱ������3��" << endl;
	cin >> t;
	type = (CardType)t;

	if (type == TEM)//��ʱ��
	{
		cout << "��������ʱ������Ч������" << endl;//�õ���ʱ������Ч��
		cin >> valid_time;
	}
}

//�õ�������Ϣ
string Card::GetNum()
{
	return owner.GetNum();//���ؿ���
}

//�ϳ�
bool Card::GetOn()
{
	if (type == STU)//ѧ����
		return Pay();
	else if (type == TEA)//��ʦ��
	{
		times_of_this_month++;//���³˳�����+1
		return true;
	}
	else if (type == RES)//���ƿ�
	{
		if (times_of_this_month < 20)//���³˳�����С��20�����
		{
			times_of_this_month++;//���³˳�����+1
			return true;
		}
		else//����׼�˳�
			return Pay();
	}
	else//��ʱ��
	{
		time_t now = time(0);// ��ǰʱ��
		if (difftime(now, time0) / 24 / 3600 <= valid_time)//����Ч���ڰ���׼�˳�
			return Pay();
		else//����
			cout << "�˿��ѹ��ڣ�" << endl;
	}

	return false;
}

//�۷�
bool Card::Pay()
{
	if (balance >= 2)
	{
		balance -= 2;//ˢ���ϳ����۷�2Ԫ
		times_of_this_month++;//���³˳�����+1

		if (balance <= 5)
			cout << "�����ͣ���ʱ��ֵ��" << endl;

		return true;
	}
	else
		cout << "���㣬��׼�˳���" << endl;

	return false;
}

//��ֵ
void Card::TopUp()
{
	int money;//��ֵ���
	cout << "�������ֵ��" << endl;
	cin >> money;

	balance += money;
}

//��ʾ������Ϣ
void Card::OutPutInfo()
{
	owner.OutPutInfo();
	cout << "��" << balance << endl;
	cout << "�����ѳ˳�������" << times_of_this_month << endl;
}


Card::~Card()
{
}
