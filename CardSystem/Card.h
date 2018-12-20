#pragma once
#include "People.h"
#include <ctime>

/**
* STU 学生卡
* TEA 教师卡
* RES 限制卡
* TEM 临时卡
*/
enum CardType { STU, TEA, RES, TEM };

/**
* 包括卡的基本信息：
* 持卡人信息、卡的类型、卡内余额、本月乘车次数等
*/
class Card
{
public:
	Card();
	void InputInfo(unsigned int num);//输入卡的信息
	unsigned int GetNum();//得到卡号信息
	bool GetOn();//上车
	bool Pay();//扣费
	void TopUp();//充值
	void OutPutInfo();//显示卡的信息
	~Card();
protected:
	People owner;//持卡者
	CardType type;//卡的类型
	double balance;//卡内余额
	int times_of_this_month;//本月乘车次数
	time_t time0;//开通时间
	int valid_time;//有效天数
};

