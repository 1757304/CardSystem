#pragma once
#include "Card.h"
/**
* ��ʱ��
* ����Ч����ÿ�γ˳��۳�2Ԫ
* ������Ч������
*/
class Temporary_Card :
	public Card
{
public:
	Temporary_Card();
	bool pay();//�ϳ�ˢ��
	~Temporary_Card();
private:
	int valid_time;//��ʱ������Ч����
};

