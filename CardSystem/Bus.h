#pragma once
#include "People.h"
#include <iostream>
#include <string>

using namespace std;

/**
* ����
* S С�� 20��
* M ���� 30��
* L ���� 40��
*/
enum BusType { S, M, L };
const int SMALL = 20, MIDDLE = 30, LARGE = 40;

/**
* �೵
* �����೵�Ļ�����Ϣ��
* ˾����Ϣ�����ơ����͡��س�����������ʱ��ε�
*/
class Bus
{
public:
	Bus();
	void InputInfo();//����೵����Ϣ
	void OutPutInfo();//��ʾ�೵����Ϣ
	~Bus();
private:
	People driver;//˾��
	BusType type;//����
	int max;//�س�����
};

