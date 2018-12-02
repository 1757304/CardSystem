#pragma once
#include "Card.h"
/**
* 学生卡
* 每次乘车扣除2元
*/
class Student_Card :
	public Card
{
public:
	Student_Card();
	~Student_Card();
};

