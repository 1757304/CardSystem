#pragma once
#include "Card.h"
/**
* 教师卡
* 免费乘车
*/
class TeacherCard :
	public Card
{
public:
	TeacherCard();
	bool Pay();//上车刷卡
	void OutPutInfo();
	~TeacherCard();
};

