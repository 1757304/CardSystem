#pragma once
#include "Card.h"
/**
* 教师卡
* 免费乘车
*/
class Teacher_Card :
	public Card
{
public:
	Teacher_Card();
	void pay();//上车刷卡
	~Teacher_Card();
};

