#include "stdafx.h"
#include "RestrictCard.h"


RestrictCard::RestrictCard()
{
}

bool RestrictCard::Pay()
{
	if (times_of_this_month < 20)//���³˳�����С��20�����
	{
		times_of_this_month++;//���³˳�����+1
		total_times++;//�ܳ˳�����+1
		return true;
	}
	else//����׼�˳�
	{
		return Card::Pay();
	}
}

void RestrictCard::OutPutInfo()
{
	cout << "���ͣ����ƿ�" << endl;
	Card::OutPutInfo();
}


RestrictCard::~RestrictCard()
{
}
