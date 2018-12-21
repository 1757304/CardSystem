#pragma once
#include "People.h"

/**
* 车型
* S 小型 20人
* M 中型 30人
* L 大型 40人
*/
enum BusType { S, M, L };
const int SMALL = 20, MIDDLE = 30, LARGE = 40;

/**
* 班车
* 包括班车的基本信息：
* 司机信息、车牌、车型、载乘人数等
*/
class Bus
{
public:
	Bus();
	void InputInfo();//输入班车的信息
	void GetOn(string f);//上车
	void OutPutInfo();//显示班车的信息
	~Bus();
private:
	People driver;//司机
	BusType type;//车型
	char license_plate_number;//车牌号
	int max;//核载人数
	int passengers;//当前乘客数
	int all;//总乘车人数
};

