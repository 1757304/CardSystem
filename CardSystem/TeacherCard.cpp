#include "stdafx.h"
#include "TeacherCard.h"


TeacherCard::TeacherCard()
{
	cout << "类型：教师卡" << endl;
	Card::OutPutInfo();
}

bool TeacherCard::Pay()
{
	times_of_this_month++;//本月乘车次数+1
	total_times++;//总乘车次数+1
	return true;
}

void TeacherCard::OutPutInfo()
{

}


TeacherCard::~TeacherCard()
{
}
