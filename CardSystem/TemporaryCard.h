#pragma once
#include "Card.h"
/**
* 临时卡
* 在有效期内每次乘车扣除2元
* 超过有效期作废
*/
class TemporaryCard :
	public Card
{
public:
	TemporaryCard();
	void InputInfo(string num);//输入卡的信息
	bool Pay();//上车刷卡
	void OutPutInfo();
	~TemporaryCard();
private:
	int valid_time;//有效天数
};

