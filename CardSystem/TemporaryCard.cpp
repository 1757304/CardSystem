#include "stdafx.h"
#include "TemporaryCard.h"


TemporaryCard::TemporaryCard()
{
}

void TemporaryCard::InputInfo(string num)
{
	Card::InputInfo(num);
	cout << "��������ʱ������Ч������" << endl;//�õ���ʱ������Ч��
	cin >> valid_time;
}

bool TemporaryCard::Pay()
{
	time_t now = time(0);// ��ǰʱ��
	if (difftime(now, time0) / 24 / 3600 <= valid_time)//����Ч���ڰ���׼�˳�
		return Card::Pay();
	else//����
		cout << "�˿��ѹ��ڣ�" << endl;
	return false;
}

void TemporaryCard::OutPutInfo()
{
	cout << "���ͣ���ʱ��" << endl;
	Card::OutPutInfo();
}


TemporaryCard::~TemporaryCard()
{
}
