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
	virtual void pay();//�ϳ�ˢ��
	void top_up();//��ֵ
	void print();//��ʾ������Ϣ
	virtual ~Card();
protected:
	People owner;//�ֿ���
	double balance;//�������
	int times_of_this_month;//���³˳�����
	int total_times;//�ܳ˳�����
	time_t time0;//��ͨʱ��
};

