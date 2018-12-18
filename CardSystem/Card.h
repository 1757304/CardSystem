#pragma once
#include "People.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

/**
* STU ѧ����
* TEA ��ʦ��
* RES ���ƿ�
* TEM ��ʱ��
*/
enum CardType { STU, TEA, RES, TEM };

/**
* �������Ļ�����Ϣ��
* �ֿ�����Ϣ���������͡����������³˳�������
*/
class Card
{
public:
	Card();
	void InputInfo(string num);//���뿨����Ϣ
	string GetNum();//�õ�������Ϣ
	bool GetOn();//�ϳ�
	bool Pay();//�۷�
	void TopUp();//��ֵ
	void OutPutInfo();//��ʾ������Ϣ
	~Card();
protected:
	People owner;//�ֿ���
	CardType type;//��������
	double balance;//�������
	int times_of_this_month;//���³˳�����
	time_t time0;//��ͨʱ��
	int valid_time;//��Ч����
};

