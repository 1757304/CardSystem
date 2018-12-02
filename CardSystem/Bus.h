#pragma once
#include "People.h"
#include <iostream>
#include <string>

using namespace std;

/**
* 车型
* S 小型 20人
* M 中型 30人
* L 大型 40人
*/
enum Type { S, M, L };
const int SMALL = 20, MIDDLE = 30, LARGE = 40;

/**
* 班车
* 包括班车的基本信息：
* 司机信息、车牌、车型、载乘人数、运行时间段等
*/
class Bus
{
public:
	Bus();
	~Bus();
private:
	People driver;//司机
	Type type;//车型
	int max;//载乘人数
};

