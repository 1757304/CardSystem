#pragma once
#include "Card.h"
/**
* ���ƿ�
* ÿ�µ�ǰ20����ѣ�֮��ÿ�ο۳�2Ԫ
*/
class RestrictCard :
	public Card
{
public:
	RestrictCard();
	bool Pay();//�ϳ�ˢ��
	void OutPutInfo();
	~RestrictCard();
};

