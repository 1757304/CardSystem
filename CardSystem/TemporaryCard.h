#pragma once
#include "Card.h"
/**
* ��ʱ��
* ����Ч����ÿ�γ˳��۳�2Ԫ
* ������Ч������
*/
class TemporaryCard :
	public Card
{
public:
	TemporaryCard();
	void InputInfo(string num);//���뿨����Ϣ
	bool Pay();//�ϳ�ˢ��
	void OutPutInfo();
	~TemporaryCard();
private:
	int valid_time;//��Ч����
};

