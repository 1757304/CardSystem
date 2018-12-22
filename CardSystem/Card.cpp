#include "stdafx.h"
#include "Card.h"


Card::Card()
{
	balance = times_of_this_month = 0;//初始时余额为0，乘车次数为0
	time0 = time(0);// 开通卡时的时间
	valid_time = 0;//初始化有效时间
}

//输入卡的信息
void Card::InputInfo(unsigned int num)
{
	int t;

	owner.InputInfo(num);//输入持卡者信息

	cout << "卡的类型：（学生卡输入0，教师卡输入1，限制卡输入2，临时卡输入3）" << endl;
	cin >> t;
	type = (CardType)t;

	if (type == TEM)//临时卡
	{
		cout << "请输入临时卡的有效天数：" << endl;//得到临时卡的有效期
		cin >> valid_time;
	}
}

//得到卡号信息
unsigned int Card::GetNum()
{
	return owner.GetNum();//返回卡号
}

//上车
bool Card::GetOn()
{
	if (type == STU)//学生卡
		return Pay();
	else if (type == TEA)//教师卡
	{
		times_of_this_month++;//本月乘车次数+1
		cout << "乘车成功！" << endl;
		return true;
	}
	else if (type == RES)//限制卡
	{
		if (times_of_this_month < 20)//本月乘车次数小于20，免费
		{
			times_of_this_month++;//本月乘车次数+1
			cout << "乘车成功！" << endl;
			return true;
		}
		else//按标准乘车
			return Pay();
	}
	else//临时卡
	{
		time_t now = time(0);//当前时间
		if (difftime(now, time0) / 24 / 3600 <= valid_time)//在有效期内按标准乘车
			return Pay();
		else//过期
			cout << "此卡已过期！乘车失败" << endl;
	}

	return false;
}

//扣费
bool Card::Pay()
{
	if (balance >= 2)
	{
		balance -= 2;//刷卡上车，扣费2元
		times_of_this_month++;//本月乘车次数+1
		if (balance <= 5)
			cout << "乘车成功！ 余额过低，及时充值！" << endl;
		else
			cout << "乘车成功！" << endl;
		return true;
	}
	else
		cout << "余额不足，不准乘车！" << endl;

	return false;
}

//充值
void Card::TopUp()
{
	int money;//充值金额
	cout << "当前余额：" << balance << endl;
	cout << "请输入充值金额：" << endl;
	cin >> money;

	balance += money;
	cout << "充值成功，当前余额：" << balance << endl;
}

//显示卡的信息
void Card::OutPutInfo()
{
	cout << "持卡者信息：" << endl;
	cout << "***" << endl;
	owner.OutPutInfo();//持卡者信息
	cout << "***" << endl;
	cout << "类型：";
	if (type == STU)//学生卡
		cout << "学生卡" << endl;
	else if (type == TEA)//教师卡
		cout << "教师卡" << endl;
	else if (type == RES)//限制卡
		cout << "限制卡" << endl;
	else//临时卡
		cout << "临时卡" << endl;
	cout << "余额：" << balance << endl;
	cout << "本月已乘车次数：" << times_of_this_month << endl;
}


Card::~Card()
{
}
