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
	void InputInfo();//���뿨����Ϣ
	bool Pay();//�ϳ�ˢ��
	~Temporary_Card();
};

