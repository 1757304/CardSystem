#include "stdafx.h"
#include "TemporaryCard.h"


TemporaryCard::TemporaryCard()
{
}

void TemporaryCard::InputInfo(string num)
{
	Card::InputInfo(num);
	cout << "请输入临时卡的有效天数：" << endl;//得到临时卡的有效期
	cin >> valid_time;
}

bool TemporaryCard::Pay()
{
	time_t now = time(0);// 当前时间
	if (difftime(now, time0) / 24 / 3600 <= valid_time)//在有效期内按标准乘车
		return Card::Pay();
	else//过期
		cout << "此卡已过期！" << endl;
	return false;
}

void TemporaryCard::OutPutInfo()
{
	cout << "类型：临时卡" << endl;
	Card::OutPutInfo();
}


TemporaryCard::~TemporaryCard()
{
}
