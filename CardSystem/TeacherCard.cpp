#include "stdafx.h"
#include "TeacherCard.h"


TeacherCard::TeacherCard()
{
	cout << "���ͣ���ʦ��" << endl;
	Card::OutPutInfo();
}

bool TeacherCard::Pay()
{
	times_of_this_month++;//���³˳�����+1
	total_times++;//�ܳ˳�����+1
	return true;
}

void TeacherCard::OutPutInfo()
{

}


TeacherCard::~TeacherCard()
{
}
