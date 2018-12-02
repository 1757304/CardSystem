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
enum Type { S, M, L };
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
	~Bus();
private:
	People driver;//˾��
	Type type;//����
	int max;//�س�����
};

