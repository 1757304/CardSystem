#include "stdafx.h"
#include "Restrict_Card.h"


Restrict_Card::Restrict_Card()
{
}

bool Restrict_Card::Pay()
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


Restrict_Card::~Restrict_Card()
{
}
