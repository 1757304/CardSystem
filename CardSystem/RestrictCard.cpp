#include "stdafx.h"
#include "RestrictCard.h"


RestrictCard::RestrictCard()
{
}

bool RestrictCard::Pay()
{
	if (times_of_this_month < 20)//本月乘车次数小于20，免费
	{
		times_of_this_month++;//本月乘车次数+1
		total_times++;//总乘车次数+1
		return true;
	}
	else//按标准乘车
	{
		return Card::Pay();
	}
}

void RestrictCard::OutPutInfo()
{
	cout << "类型：限制卡" << endl;
	Card::OutPutInfo();
}


RestrictCard::~RestrictCard()
{
}
