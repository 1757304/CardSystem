#include "stdafx.h"
#include "StudentCard.h"


StudentCard::StudentCard()
{
}

void StudentCard::OutPutInfo()
{
	cout << "类型：学生卡" << endl;
	Card::OutPutInfo();
}


StudentCard::~StudentCard()
{
}
