#pragma once
#include "People.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/**
* 卡的基类
* 包括卡的基本信息：
* 持卡人信息、卡内余额、本月乘车次数、总乘车次数等
*/
class Card
{
public:
	Card();
	void InputInfo();//输入卡的信息
	virtual bool Pay();//上车刷卡
	void TopUp();//充值
	void OutPutInfo();//显示卡的信息
	virtual ~Card();
protected:
	People owner;//持卡者
	double balance;//卡内余额
	int times_of_this_month;//本月乘车次数
	int total_times;//总乘车次数
	time_t time0;//开通时间
};

