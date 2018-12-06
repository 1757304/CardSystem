#pragma once
#include "Card.h"
/**
* 限制卡
* 每月的前20次免费，之后每次扣除2元
*/
class Restrict_Card :
	public Card
{
public:
	Restrict_Card();
	bool Pay();//上车刷卡
	~Restrict_Card();
};

