#include "stdafx.h"
#include "Restricting_Card.h"


Restricting_Card::Restricting_Card()
{
}

void Restricting_Card::pay()
{
	if (times_of_this_month < 20)//本月乘车次数小于20，免费
	{
		times_of_this_month++;//本月乘车次数+1
		total_times++;//总乘车次数+1
	}
	else//按标准乘车
	{
		Card::pay();
	}
}


Restricting_Card::~Restricting_Card()
{
}
