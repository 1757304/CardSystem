#pragma once
#include "Card.h"
/**
* ���ƿ�
* ÿ�µ�ǰ20����ѣ�֮��ÿ�ο۳�2Ԫ
*/
class Restrict_Card :
	public Card
{
public:
	Restrict_Card();
	bool Pay();//�ϳ�ˢ��
	~Restrict_Card();
};

