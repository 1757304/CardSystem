#include "stdafx.h"
#include "Temporary_Card.h"


Temporary_Card::Temporary_Card()
{
	cout << "��������ʱ������Ч������" << endl;//�õ���ʱ������Ч��
	cin >> valid_time;
}

bool Temporary_Card::Pay()
{
	time_t now = time(0);// ��ǰʱ��
	if (difftime(now, time0) / 24 / 3600 <= valid_time)//����Ч���ڰ���׼�˳�
		return Card::Pay();
	else//����
		cout << "�˿��ѹ��ڣ�" << endl;
	return false;
}


Temporary_Card::~Temporary_Card()
{
}
