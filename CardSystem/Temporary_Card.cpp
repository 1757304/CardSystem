#include "stdafx.h"
#include "Temporary_Card.h"


Temporary_Card::Temporary_Card()
{
	cout << "��������ʱ������Ч������" << endl;//�õ���ʱ������Ч��
	cin >> valid_time;
}

void Temporary_Card::pay()
{
	time_t now = time(0);// ��ǰʱ��
	if (difftime(now, time0) / 24 / 3600 <= valid_time)//����Ч���ڰ���׼�˳�
		Card::pay();
	else//����
		cout << "�˿��ѹ��ڣ�" << endl;
}


Temporary_Card::~Temporary_Card()
{
}
