#include "stdafx.h"
#include "Teacher_Card.h"


Teacher_Card::Teacher_Card()
{
}

bool Teacher_Card::pay()
{
	times_of_this_month++;//���³˳�����+1
	total_times++;//�ܳ˳�����+1
	return true;
}


Teacher_Card::~Teacher_Card()
{
}
