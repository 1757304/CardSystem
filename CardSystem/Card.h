#pragma once
#include "People.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/**
* ���Ļ���
* �������Ļ�����Ϣ��
* �ֿ�����Ϣ�����������³˳��������ܳ˳�������
*/
class Card
{
public:
	Card();
	virtual void InputInfo(string num);//���뿨����Ϣ
	string GetNum();//�õ�������Ϣ
	virtual bool Pay();//�ϳ�ˢ��
	void TopUp();//��ֵ
	void OutPutInfo();//��ʾ������Ϣ
	virtual ~Card();
protected:
	People owner;//�ֿ���
	double balance;//�������
	int times_of_this_month;//���³˳�����
	int total_times;//�ܳ˳�����
	time_t time0;//��ͨʱ��
};

