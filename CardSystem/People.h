#pragma once
#pragma warning(disable:4996)
#include <iostream>
#include <string>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

/**
* �Ա�
* MALE ����
* FEMALE Ů��
*/
enum Sex { MALE, FEMALE };

const int N = 32;

/**
* ��
* �����˵Ļ�����Ϣ��
* �������Ա�ְ��������λ�����ʺ�/ѧ�ŵ�
*/
class People
{
public:
	People();
	void InputInfo(unsigned int num);//�����˵���Ϣ
	unsigned int GetNum();//�õ����ʺ�/ѧ����Ϣ
	void OutPutInfo();//��ʾ�˵���Ϣ
	~People();
private:
	char name[N];//����
	Sex sex;//�Ա�
	char position[N];//ְ��
	char unit[N];//������λ
	unsigned int number;//���ʺ�/ѧ��
};

