#include "stdafx.h"
#include "Teacher_Card.h"


Teacher_Card::Teacher_Card()
{
}

bool Teacher_Card::pay()
{
	times_of_this_month++;//本月乘车次数+1
	total_times++;//总乘车次数+1
	return true;
}


Teacher_Card::~Teacher_Card()
{
}
