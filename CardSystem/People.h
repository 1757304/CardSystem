#pragma once
#include <iostream>
#include <string>

using namespace std;

/**
* �Ա�
* MALE ����
* FEMALE Ů��
*/
enum Sex { MALE, FEMALE };

/**
* ��
* �����˵Ļ�����Ϣ��
* �������Ա�ְ��������λ�����ʺ�/ѧ�ŵ�
*/
class People
{
public:
	People();
	void print();//��ʾ�˵���Ϣ
	~People();
private:
	string name;//����
	Sex sex;//�Ա�
	string position;//ְ��
	string unit;//������λ
	int num;//���ʺ�/ѧ��
};

