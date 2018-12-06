#include "stdafx.h"
#include "Restrict_Card.h"


Restrict_Card::Restrict_Card()
{
}

bool Restrict_Card::Pay()
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


Restrict_Card::~Restrict_Card()
{
}
