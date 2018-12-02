#include "stdafx.h"
#include "Card.h"


Card::Card()
{
	balance = times_of_this_month = total_times = 0;//初始时余额为0，乘车次数为0
	time0 = time(0);// 开通卡时的时间
}

void Card::pay()
{
	if (balance >= 2)
	{
		balance -= 2;//刷卡上车，扣费2元
		times_of_this_month++;//本月乘车次数+1
		total_times++;//总乘车次数+1
	}
	else
		cout << "余额不足，不准乘车！" << endl;

	if (balance <= 5)
		cout << "余额过低，及时充值！" << endl;
}

void Card::top_up()
{
	int money;//充值金额
	cout << "请输入充值金额：" << endl;
	cin >> money;

	balance += money;
}

void Card::print()
{
	owner.print();
	cout << "余额：" << balance << endl;
	cout << "本月乘车次数：" << times_of_this_month << endl;
	cout << "总乘车次数：" << total_times << endl;
}


Card::~Card()
{
}
