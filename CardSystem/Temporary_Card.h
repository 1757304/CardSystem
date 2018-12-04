#pragma once
#include "Card.h"
/**
* 临时卡
* 在有效期内每次乘车扣除2元
* 超过有效期作废
*/
class Temporary_Card :
	public Card
{
public:
	Temporary_Card();
	bool Pay();//上车刷卡
	~Temporary_Card();
private:
	int valid_time;//临时卡的有效天数
};

