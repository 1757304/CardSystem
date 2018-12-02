#pragma once
#include "Card.h"
/**
* 限制卡
* 每月的前20次免费，之后每次扣除2元
*/
class Restricting_Card :
	public Card
{
public:
	Restricting_Card();
	void pay();//上车刷卡
	~Restricting_Card();
};

