#pragma once
#include "Card.h"
/**
* ��ʦ��
* ��ѳ˳�
*/
class TeacherCard :
	public Card
{
public:
	TeacherCard();
	bool Pay();//�ϳ�ˢ��
	void OutPutInfo();
	~TeacherCard();
};

