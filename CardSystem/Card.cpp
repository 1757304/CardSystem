#include "stdafx.h"
#include "Card.h"


Card::Card()
{
	balance = times_of_this_month = 0;//��ʼʱ���Ϊ0���˳�����Ϊ0
	time0 = time(0);// ��ͨ��ʱ��ʱ��
	valid_time = 0;//��ʼ����Чʱ��
}

//���뿨����Ϣ
void Card::InputInfo(unsigned int num)
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
unsigned int Card::GetNum()
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
		cout << "�˳��ɹ���" << endl;
		return true;
	}
	else if (type == RES)//���ƿ�
	{
		if (times_of_this_month < 20)//���³˳�����С��20�����
		{
			times_of_this_month++;//���³˳�����+1
			cout << "�˳��ɹ���" << endl;
			return true;
		}
		else//����׼�˳�
			return Pay();
	}
	else//��ʱ��
	{
		time_t now = time(0);//��ǰʱ��
		if (difftime(now, time0) / 24 / 3600 <= valid_time)//����Ч���ڰ���׼�˳�
			return Pay();
		else//����
			cout << "�˿��ѹ��ڣ��˳�ʧ��" << endl;
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
			cout << "�˳��ɹ��� �����ͣ���ʱ��ֵ��" << endl;
		else
			cout << "�˳��ɹ���" << endl;
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
	cout << "��ǰ��" << balance << endl;
	cout << "�������ֵ��" << endl;
	cin >> money;

	balance += money;
	cout << "��ֵ�ɹ�����ǰ��" << balance << endl;
}

//��ʾ������Ϣ
void Card::OutPutInfo()
{
	cout << "�ֿ�����Ϣ��" << endl;
	cout << "***" << endl;
	owner.OutPutInfo();//�ֿ�����Ϣ
	cout << "***" << endl;
	cout << "���ͣ�";
	if (type == STU)//ѧ����
		cout << "ѧ����" << endl;
	else if (type == TEA)//��ʦ��
		cout << "��ʦ��" << endl;
	else if (type == RES)//���ƿ�
		cout << "���ƿ�" << endl;
	else//��ʱ��
		cout << "��ʱ��" << endl;
	cout << "��" << balance << endl;
	cout << "�����ѳ˳�������" << times_of_this_month << endl;
}


Card::~Card()
{
}
