#include "stdafx.h"
#include "Temporary_Card.h"


Temporary_Card::Temporary_Card()
{
}

void Temporary_Card::InputInfo()
{
	Card::InputInfo();
	cout << "请输入临时卡的有效天数：" << endl;//得到临时卡的有效期
	cin >> valid_time;
}

bool Temporary_Card::Pay()
{
	time_t now = time(0);// 当前时间
	if (difftime(now, time0) / 24 / 3600 <= valid_time)//在有效期内按标准乘车
		return Card::Pay();
	else//过期
		cout << "此卡已过期！" << endl;
	return false;
}


Temporary_Card::~Temporary_Card()
{
}
