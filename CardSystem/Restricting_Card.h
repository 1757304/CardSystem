#pragma once
#include "Card.h"
/**
* ���ƿ�
* ÿ�µ�ǰ20����ѣ�֮��ÿ�ο۳�2Ԫ
*/
class Restricting_Card :
	public Card
{
public:
	Restricting_Card();
	bool pay();//�ϳ�ˢ��
	~Restricting_Card();
};

