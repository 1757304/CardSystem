#include "stdafx.h"
#include "Restricting_Card.h"


Restricting_Card::Restricting_Card()
{
}

bool Restricting_Card::pay()
{
	if (times_of_this_month < 20)//���³˳�����С��20�����
	{
		times_of_this_month++;//���³˳�����+1
		total_times++;//�ܳ˳�����+1
		return true;
	}
	else//����׼�˳�
	{
		return Card::pay();
	}
}


Restricting_Card::~Restricting_Card()
{
}
