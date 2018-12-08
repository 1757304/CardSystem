#pragma once
#include "Card.h"
/**
* 限制卡
* 每月的前20次免费，之后每次扣除2元
*/
class RestrictCard :
	public Card
{
public:
	RestrictCard();
	bool Pay();//上车刷卡
	void OutPutInfo();
	~RestrictCard();
};

