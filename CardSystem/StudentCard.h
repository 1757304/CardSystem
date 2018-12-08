#pragma once
#include "Card.h"
/**
* 学生卡
* 每次乘车扣除2元
*/
class StudentCard :
	public Card
{
public:
	StudentCard();
	void OutPutInfo();
	~StudentCard();
};

