#pragma once
#include "People.h"
#include "data.h"

/**
* ����
* S С�� 20��
* M ���� 30��
* L ���� 40��
*/
enum BusType { S, M, L };

const int SMALL = 20, MIDDLE = 30, LARGE = 40;

typedef struct Time {
	int hour;//Сʱ
	int min;//����

}Time;

/**
* �೵
* �����೵�Ļ�����Ϣ��
* ˾����Ϣ�����ơ����͡��س�������
*/
class Bus
{
public:
	Bus();
	void InputInfo();//����೵����Ϣ
	void GetOn(vector<Card>& c, int t);//�ϳ�
	void OutPutInfo();//��ʾ�೵����Ϣ
	~Bus();
private:
	People driver;//˾��
	BusType type;//����
	char license_plate_number;//���ƺ�
	int max;//��������
	int passengers;//��ǰ�˿���
	int all;//�ܳ˳�����
	Time schedule[3];//ʱ���
	int on_time;//׼ʱ����
};

